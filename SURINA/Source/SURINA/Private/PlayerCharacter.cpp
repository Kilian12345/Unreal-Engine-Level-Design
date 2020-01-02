// Fill out your copyright notice in the Description page of Project Settings.

#include "Public/PlayerCharacter.h"
#include "Public/KnifeProjectile.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/PlayerController.h"
#include "Components/DecalComponent.h"
#include "Engine/World.h"
#include "Engine/Engine.h"
#include "AIController.h"
#include "DrawDebugHelpers.h"
#include "Math/Vector.h"
#include <EngineGlobals.h>
#include <Runtime/Engine/Classes/Engine/Engine.h>
#include "Runtime/Engine/Public/TimerManager.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CursorToWorld = CreateDefaultSubobject<UDecalComponent>("CursorToWorld");
	CursorToWorld->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UMaterial> DecalMaterialAsset(TEXT("Material'/Game/TopDownCPP/Blueprints/M_Cursor_Decal.M_Cursor_Decal'"));
	if (DecalMaterialAsset.Succeeded())
	{
		CursorToWorld->SetDecalMaterial(DecalMaterialAsset.Object);
	}
	CursorToWorld->DecalSize = FVector(16.0f, 32.0f, 32.0f);
	CursorToWorld->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f).Quaternion());


	CanDash = true;
	DashDistance = 7000.f;
	DashCooldown = .1f;
	DashStop = 0.1f;
	FixedDashDistance = false;

}

void APlayerCharacter::Dash()
{
	if (APlayerController* PlayerController = Cast<APlayerController>(GetController()))
	{
		FHitResult TraceHitResult;
		PlayerController->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
		TargetPosition = TraceHitResult.Location;
	}

	if (CanDash)
	{
		GetCharacterMovement()->BrakingFrictionFactor = 0.f; //character will not be slowed by ground
		if (FixedDashDistance == false)
		{
			float distanceToCursor = FVector().Distance(GetActorLocation(), CursorToWorld->GetComponentLocation()) * 10.f;
			if (distanceToCursor > DashDistance) distanceToCursor = DashDistance;
			LaunchCharacter(FVector(TargetPosition.X - this->GetActorLocation().X, TargetPosition.Y - this->GetActorLocation().Y, 0.f).GetSafeNormal() * distanceToCursor, true, true); //Get safe normal returns direction
		}

		else if (FixedDashDistance == true)
		{
			LaunchCharacter(FVector(TargetPosition.X - this->GetActorLocation().X, TargetPosition.Y - this->GetActorLocation().Y, 0.f).GetSafeNormal() * DashDistance, true, true); //Get safe normal returns direction
		}
		
		CanDash = false;

		GetWorldTimerManager().SetTimer(UnuseHandle, this, &APlayerCharacter::StopDash, DashStop, false); //after (DashStop value) seconds, call this function
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Distance to Target is: %f"), DashDistance));
	}
}

void APlayerCharacter::StopDash()
{
	GetCharacterMovement()->StopMovementImmediately();
	GetWorldTimerManager().SetTimer(UnuseHandle, this, &APlayerCharacter::ResetDash, DashCooldown, false); //after (DashCooldown value) seconds, call this function
	GetCharacterMovement()->BrakingFrictionFactor = 2.f;
}

void APlayerCharacter::ResetDash()
{
	CanDash = true;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	FVector ActorLocation = GetActorLocation();
	TargetPosition = ActorLocation;
}

void APlayerCharacter::GetNewLocation()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Here")));

	if (APlayerController *PlayerController = Cast<APlayerController>(GetController()))
	{
		FHitResult TraceHitResult;
		PlayerController->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
		TargetPosition = TraceHitResult.Location;
		FRotator Rotation = TargetPosition.Rotation();

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, FString::Printf(TEXT("Mouse variable values: PositionX: %f, PositionY: %f"), TargetPosition.X, TargetPosition.Y));
	}
}

void APlayerCharacter::Fire()
{
	// Attempt to fire a projectile.
	if (ProjectileBlueprint)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT("Here")));
		FVector CursorLocation;
		FRotator CursorRotation;

		if (APlayerController * PC = Cast<APlayerController>(GetController()))
		{
			FHitResult TraceHitResult;
			PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
			CursorLocation = TraceHitResult.ImpactNormal;
			CursorRotation = CursorLocation.Rotation();
		}

		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);
		FRotator MuzzleRotation = CameraRotation;

		// Skew the aim to be slightly upwards.
		MuzzleRotation.Pitch += 10.0f;
		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = Instigator;

			// Spawn the projectile at the muzzle.
			AKnifeProjectile* Projectile = World->SpawnActor<AKnifeProjectile>(ProjectileBlueprint, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->LaunchProjectile(LaunchSpeed);
			}
		}
	}
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (APlayerController* PC = Cast<APlayerController>(GetController()))
	{
		FHitResult TraceHitResult;
		PC->GetHitResultUnderCursor(ECC_Visibility, true, TraceHitResult);
		FVector CursorFV = TraceHitResult.ImpactNormal;
		FRotator CursorR = CursorFV.Rotation();
		CursorToWorld->SetWorldLocation(TraceHitResult.Location);
		CursorToWorld->SetWorldRotation(CursorR);
	}

	FVector ActorLocation = GetActorLocation();
	FVector Direction = FVector (TargetPosition.X - ActorLocation.X, TargetPosition.Y - ActorLocation.Y, .0f);

	AddActorLocalOffset(Direction * MoveSpeed, true);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &APlayerCharacter::Dash);

	//PlayerInputComponent->BindAction("SetDestination", IE_Pressed, this, &APlayerCharacter::GetNewLocation);
	//PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APlayerCharacter::Fire);

}