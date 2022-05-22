#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakDroneProjectile.h"
#include "Engine/EngineTypes.h"
#include "OakActionAbilityOwnedResourceInterface.h"
#include "AttributeInitializationData.h"
#include "HUDInWorldIconTargetInfo.h"
#include "GRMLNBeamConfiguration.h"
#include "GRMLNHardpointData.h"
#include "OakActionAbilityEnumMaskHelper.h"
#include "GRMLNStaticFieldData.h"
#include "GRMLNBadDoseData.h"
#include "UObject/NoExportTypes.h"
#include "EOakDroneMovementMode.h"
#include "EGRMLNModType.h"
#include "OakDroneProjectile_GRMLN.generated.h"

class UPrimitiveComponent;
class UParticleSystemComponent;
class UMeshComponent;
class UGbxCustomizationComponent;
class UDamageSource;
class UInWorldIconData;
class AActor;
class UOakActionAbility_GRMLN;
class AOakCharacter_Player;
class UCinematicModeData;
class ULightProjectile;

UCLASS()
class AOakDroneProjectile_GRMLN : public AOakDroneProjectile, public IOakActionAbilityOwnedResourceInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGbxCustomizationComponent* CustomizationComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* DroneCollisionComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UMeshComponent* PrimaryMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* StaticFieldComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData AOERadius;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> StaticFieldDamageSource;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> CalledShotDamageSource;
    
    UPROPERTY(EditDefaultsOnly)
    FGRMLNBeamConfiguration StaticFieldBeamConfigurationData;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData BadDoseBeamCount;
    
    UPROPERTY(EditDefaultsOnly)
    FGRMLNBeamConfiguration BadDoseBeamConfigurationData;
    
    UPROPERTY(EditDefaultsOnly)
    UInWorldIconData* HUDIconData;
    
    UPROPERTY(EditDefaultsOnly)
    FName HUDIconSocketName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FGRMLNHardpointData> Hardpoints;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    UOakActionAbility_GRMLN* OwnerActionAbility;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    AOakCharacter_Player* OwnerPlayer;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_DroneTarget, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DroneTarget;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_RuntimeMods)
    FOakActionAbilityEnumMaskHelper RuntimeMods;
    
    UPROPERTY(Transient)
    FHUDInWorldIconTargetInfo HUDIconInfo;
    
    UPROPERTY(BlueprintReadOnly, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBoostEnabled;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_bIsStaticFieldSearching)
    bool bIsStaticFieldSearching;
    
    UPROPERTY(Transient)
    FGRMLNStaticFieldData StaticFieldData;
    
    UPROPERTY(Transient)
    TArray<FGRMLNBadDoseData> BadDoseBeams;
    
    UPROPERTY(Export, Transient)
    TMap<FName, UParticleSystemComponent*> SocketToParticleSystemComponent;
    
    UPROPERTY(Transient)
    TMap<AActor*, int32> DroneOverlappingActors;
    
public:
    AOakDroneProjectile_GRMLN();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION()
    void UpdateActiveTarget();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetupMods();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetManualTarget(AActor* NewDroneTarget);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void SetDronePhasing(bool bPhasing);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetActiveTargetingEnabled(bool bEnabled);
    
private:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerActivateCalledShot(FVector Location);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterParticleSystemComponent(FName SocketName, UParticleSystemComponent* InComponent);
    
    UFUNCTION()
    void OnTargetDied();
    
    UFUNCTION()
    void OnTargetDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShutdownGracefully();
    
private:
    UFUNCTION()
    void OnRep_RuntimeMods();
    
    UFUNCTION()
    void OnRep_DroneTarget();
    
    UFUNCTION()
    void OnRep_bIsStaticFieldSearching();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnDroneBoostStateChanged();
    
public:
    UFUNCTION()
    void OnCinematicModeChanged(UCinematicModeData* CinematicMode);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnCalledShotKill(AActor* KilledActor);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCalledShotActivated(FVector Location);
    
private:
    UFUNCTION()
    void NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsInMovementMode(EOakDroneMovementMode Mode) const;
    
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool HasValidDroneTarget() const;
    
public:
    UFUNCTION(BlueprintPure)
    bool HasGRMLNMod(EGRMLNModType ModType) const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    AActor* FindNewTargetAutonomous() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void DoDroneDelivery();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateStaticFieldBeamToTarget(AActor* TargetActor, FName BeamName) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void CreateBadDoseBeamToTarget(AActor* TargetActor, FName BeamName) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ClientNotifyLightProjectileFire(ULightProjectile* Source);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyShieldDamageRefund(AActor* CurrentTarget, FVector LastDamageLocation, float TotalRefund) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyCollisionDamageToTarget(AActor* Target);
    
public:
    UFUNCTION(BlueprintCallable)
    void ActivateCalledShot(FVector Location);
    
    
    // Fix for true pure virtual functions not being implemented
};

