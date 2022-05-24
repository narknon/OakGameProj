#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxSkeletalMeshComponent.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "OakNogDroneContainerComponent.generated.h"

class UParticleSystem;
class AOakDroneProjectile;
class AActor;
class AGbxCharacter;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakNogDroneContainerComponent : public UGbxSkeletalMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DroneDigistructTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DroneHealthPercentOfNog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDronesDieOnHealthDepleted;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DroneReplenishThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DroneReplenishMin;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxBlackboardKeySelector ShouldReplenishDronesKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGbxBlackboardKeySelector DroneShieldEnabledKey;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UParticleSystem* DroneDeathFX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 DroneScatterCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakDroneProjectile> ScatterDroneClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakDroneProjectile> HealDroneClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakDroneProjectile> DefendDroneClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AOakDroneProjectile> AttackDroneClass;
    
    UPROPERTY(BlueprintReadOnly)
    int32 DroneAliveCount;
    
    UPROPERTY(Transient)
    AGbxCharacter* Nog;
    
    UOakNogDroneContainerComponent();
    UFUNCTION(BlueprintCallable)
    void ToggleDroneBone(int32 DroneIndex, bool bToggleOn, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void ToggleDrone(int32 DroneIndex, bool bToggleOn, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void ToggleAllDrones(bool bToggleOn, bool bInstant);
    
    UFUNCTION(BlueprintCallable)
    void StopReplenishingDrones();
    
    UFUNCTION(BlueprintCallable)
    void ReplenishDrones(int32 TotalNeeded, float DelayBetweenSpawn, bool bInstant, const FString& DroneListOverrideCSV);
    
    UFUNCTION(BlueprintCallable)
    void KillDrone(int32 DroneIndex);
    
    UFUNCTION(BlueprintCallable)
    void KillAllDrones(bool bScatterDrones);
    
    UFUNCTION(BlueprintPure)
    bool IsDroneEnabled(int32 DroneIndex) const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetDroneTransform(int32 DroneIndex) const;
    
    UFUNCTION(BlueprintPure)
    FName GetDroneName(int32 DroneIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindDroneIndexByBoneName(FName BoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void DroneInitialization();
    
    UFUNCTION(BlueprintCallable)
    void DeployRandomDrones(int32 DroneCount, TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void DeployRandomDrone(TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void DeployDrone(int32 DroneIndex, TSubclassOf<AOakDroneProjectile> DroneClass, AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageToDrones(float Damage, FVector HitLocation);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamageToDrone(int32 DroneIndex, float Damage);
    
};

