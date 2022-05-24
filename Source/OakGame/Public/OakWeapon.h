#pragma once
#include "CoreMinimal.h"
#include "WwiseImplementerInterface.h"
#include "Weapon.h"
#include "FoleyImplementerInterface.h"
#include "EWeaponHolsteredSizeType.h"
#include "AudioParametersProviderInterface.h"
#include "OakElementalEffectBucketProviderInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "EOakElementalStackBucketType.h"
#include "WeaponConfigurationEvent.h"
#include "WeaponConfigurationRtpc.h"
#include "EOakWeaponPartType.h"
#include "OakWeapon.generated.h"

class UWeaponBalanceStateComponent;
class UWeaponSkinPartData;
class UManufacturerData;
class UWwiseAudioComponent;

UCLASS()
class AOakWeapon : public AWeapon, public IAudioParametersProviderInterface, public IOakElementalEffectBucketProviderInterface, public IFoleyImplementerInterface, public IWwiseImplementerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 GripPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 ForegripPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 MagPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 ModePartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 ModeSwitchPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 BarrelPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 BoltPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 TriggerPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 HammerPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 ScopePartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 MeleePartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 CustomAPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    uint8 CustomBPartType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHasPistolStock;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    EWeaponHolsteredSizeType HolsteredSizeType;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UWeaponBalanceStateComponent* BalanceStateComponent;
    
    UPROPERTY(EditDefaultsOnly)
    FVector CenterCrosshairViewModelLocationOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FRotator CenterCrosshairViewModelRotationOffset;
    
    UPROPERTY(Transient, ReplicatedUsing=UpdateBodyLoopActivity)
    uint8 AudioBodyLoopState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_UpdateAmpEffects)
    uint8 bAmpEffectActive: 1;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_WeaponSkin)
    UWeaponSkinPartData* WeaponSkin;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat QuickEquipTime;
    
    UPROPERTY(EditDefaultsOnly)
    EOakElementalStackBucketType ElementalEffectBucketType;
    
    UPROPERTY(EditAnywhere)
    bool bWeaponUsingCollision;
    
public:
    AOakWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void UpdateBodyLoopActivity();
    
public:
    UFUNCTION(BlueprintCallable)
    void ReconfigureWeaponAudio(int32 UseModeIdx, TArray<FWeaponConfigurationEvent> ConfigureEvents, TArray<FWeaponConfigurationRtpc> ConfigureRtpcs, bool bAdditive);
    
protected:
    UFUNCTION()
    void OnRep_WeaponSkin();
    
    UFUNCTION()
    void OnRep_UpdateAmpEffects();
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnWeaponSkinApplied();
    
public:
    UFUNCTION(BlueprintPure)
    uint8 GetPartTypeValue(EOakWeaponPartType PartType) const;
    
    UFUNCTION(BlueprintPure)
    UManufacturerData* GetManufacturer() const;
    
    UFUNCTION(BlueprintCallable)
    void CloneAudioConfiguration(UWwiseAudioComponent* TargetComponent, int32 UseModeIdx);
    
    
    // Fix for true pure virtual functions not being implemented
};

