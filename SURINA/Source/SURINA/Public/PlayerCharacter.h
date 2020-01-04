// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"	
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class SURINA_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

	/** Returns CursorToWorld subobject **/
	FORCEINLINE class UDecalComponent* GetCursorToWorld() { return CursorToWorld; }
	
	UFUNCTION(BlueprintCallable, Category = "Setup")
		void Fire();

	UPROPERTY(EditDefaultsOnly, Category = "Setup")
		TSubclassOf<class AKnifeProjectile> ProjectileBlueprint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector MuzzleOffset;

	UPROPERTY(EditAnywhere)
		bool FixedDashDistance;

	UFUNCTION()
		void Dash();
	UFUNCTION()
		void StopDash();
	UFUNCTION()
		void ResetDash();
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Variables")
		float DashDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Variables")
		float DashCooldown;	 
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Variables")
		bool CanDash;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Player Variables")
		float DashStop;
	UPROPERTY(EditAnywhere, Category = "Player Variables")
		FTimerHandle UnuseHandle;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void GetNewLocation();

	FVector TargetPosition;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


private: 
	/** A decal that projects to the cursor location. */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
		class UDecalComponent* CursorToWorld;

	UPROPERTY(EditDefaultsOnly, Category = "Firing")
		float LaunchSpeed = 4000;

};
