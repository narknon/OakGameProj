#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "WeaponInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GbxAttributeFloat -FallbackName=GbxAttributeFloat
#include "AmmoProviderInterface.h"
#include "ProjectileSourceInterface.h"
#include "WeaponRegisterSkeletalControlData.h"
#include "WeaponEventDelegate.h"
#include "WeaponPutDownEventDelegate.h"
#include "WeaponInputEventDelegate.h"
#include "WeaponReloadStartedEventDelegate.h"
#include "WeaponReloadEndedEventDelegate.h"
#include "UObject/NoExportTypes.h"
#include "WeaponTargetLockEventDelegate.h"
#include "WeaponRegisterMaterialEffectData.h"
#include "WeaponAttachState.h"
#include "WeaponHiddenEventDelegate.h"
#include "WeaponEffectQueryData.h"
#include "DamageScaleConditionalData.h"
#include "GbxObjectReplicatorProxy.h"
#include "EWeaponActionType.h"
#include "WeaponUseModeState.h"
#include "WeaponRegisterAttachmentEffectData.h"
#include "EWeaponEquipType.h"
#include "EWeaponEffectType.h"
#include "EWeaponSkeletalControlEvent.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponAttachmentVisibilityType.h"
#include "WeaponZoomState.h"
#include "WeaponRegisterTrinketAttachmentData.h"
#include "WeaponMaterialEffectData.h"
#include "ActionState_Base.h"
#include "Weapon.generated.h"

class UWeaponUseComponent;
class UWeaponTypeAsset;
class UWeaponTriggerFeedbackAsset;
class UWeaponFireComponent;
class UWeaponTypeData;
class UGbxWeaponUserInterface;
class IGbxWeaponUserInterface;
class UAimAssistParameters;
class UWeaponAttachmentSlot;
class UDamageModifierComponent;
class UTexture2D;
class UAnimMontage;
class UMaterialInterface;
class APawn;
class UParticleSystem;
class UGbxAction;
class UActorComponent;
class UMeshComponent;

UCLASS()
class GBXWEAPON_API AWeapon : public AActor, public IWeaponInterface, public IAmmoProviderInterface, public IProjectileSourceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Export, Transient)
    UWeaponFireComponent* CurrentFireComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UWeaponTypeAsset* WeaponDisplayData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UWeaponTypeData* WeaponType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat SwitchModeTimeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwitchModeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SwitchModeCompletePercent;
    
    UPROPERTY(Transient)
    TScriptInterface<IGbxWeaponUserInterface> WeaponUser;
    
    UPROPERTY()
    FWeaponEvent BegunPlay;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifyGivenTo;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifyAttached;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifyDetached;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifyEquipped;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponPutDownEvent NotifyPutDown;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifySwitchedMode;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponEvent NotifyFirstPersonCreated;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponInputEvent NotifyUseInput;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadStartedEvent NotifyReloadStarted;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponReloadEndedEvent NotifyReloadEnded;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponTargetLockEvent NotifyTargetLockChanged;
    
    UPROPERTY(BlueprintAssignable)
    FWeaponHiddenEvent NotifyHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PostSprintDelayUseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ViewModelFOV;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DepthOfFieldZoomedForegroundNearRegion;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDamageScaleConditionalData> DamageScaleConditionals;
    
    UPROPERTY(Replicated, Transient)
    FGbxObjectReplicatorProxy ReplicationProxy;
    
protected:
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PendingAttachState)
    FWeaponAttachState PendingAttachState;
    
    UPROPERTY(Transient)
    FWeaponAttachState AttachState;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat EquipTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Replicated)
    FGbxAttributeFloat PutDownTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_PendingUseModeIndex)
    uint8 PendingUseModeIndex;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_CurrentUseModeIndex)
    uint8 CurrentUseModeIndex;
    
    UPROPERTY(Transient)
    uint8 CurrentSlotIndex;
    
    UPROPERTY(Transient)
    uint8 NextSlotIndex;
    
    UPROPERTY(Transient)
    TArray<FWeaponUseModeState> UseModeState;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAimAssistParameters* AimAssetParameters;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_TargetLockedChanged)
    bool bIsTargetLocked;
    
public:
    UPROPERTY(Transient)
    uint32 AttributeResolverUseModeBitmask;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceUnzoomWhenSwitchingModes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UWeaponAttachmentSlot*> AttachmentSlots3P;
    
    UPROPERTY(Transient)
    TArray<UWeaponAttachmentSlot*> AttachmentSlots1P;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool bWeaponAttached;
    
    UPROPERTY(Transient)
    TArray<FWeaponRegisterMaterialEffectData> RegisteredMaterialEffects;
    
    UPROPERTY(Transient)
    TArray<FWeaponRegisterSkeletalControlData> RegisteredSkeletalControls;
    
    UPROPERTY(Transient)
    UWeaponTriggerFeedbackAsset* CachedFireTriggerFeedback;
    
    UPROPERTY(Transient)
    UWeaponTriggerFeedbackAsset* CachedZoomTriggerFeedback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowCrosshair;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysTickAttachedMeshes;
    
    UPROPERTY(EditAnywhere)
    FName BodyWeaponHoldName;
    
public:
    UPROPERTY(EditAnywhere)
    TArray<FName> AnimSetGenericNames;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageModifierComponent> DamageModifierCompClass;
    
private:
    UPROPERTY(Transient)
    FName CurrentState;
    
    UPROPERTY(Transient)
    TArray<FWeaponRegisterAttachmentEffectData> UnregisteredFirstPersonOnlyAttachmentEffects;
    
protected:
    UPROPERTY(Transient)
    TArray<UTexture2D*> UseModeIcons;
    
    UPROPERTY(Transient)
    TArray<FString> UseModeIconFrameNames;
    
public:
    UPROPERTY(BlueprintReadWrite)
    FName MainHandGripSocketName;
    
    UPROPERTY(BlueprintReadWrite)
    FName OffHandGripSocketName;
    
    AWeapon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Unlock(bool bReplicate);
    
protected:
    UFUNCTION()
    void TryAutoReload();
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleMode(uint8 InputChannel);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchPendingUseMode();
    
public:
    UFUNCTION(BlueprintCallable)
    void SwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void StopZooming(bool bSkipTransitions, bool bClearInput);
    
    UFUNCTION(BlueprintCallable)
    void StopWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction);
    
    UFUNCTION(BlueprintCallable)
    void StopUsing(uint8 InputChannel, bool bForced);
    
    UFUNCTION(BlueprintCallable)
    void StopReloading();
    
    UFUNCTION(BlueprintCallable)
    void StopModeSwitch();
    
    UFUNCTION(BlueprintCallable)
    void StopEffects(TEnumAsByte<EWeaponEffectType> EffectType, uint8 UseModeIndex);
    
    UFUNCTION(BlueprintCallable)
    void StopDynamicMaterialEffect(int32 EffectID);
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(UAnimMontage* Anim, bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void StartZooming();
    
    UFUNCTION(BlueprintCallable)
    void StartUsing(uint8 InputChannel);
    
    UFUNCTION(BlueprintCallable)
    void StartReloading(bool bAuto);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetLocked(bool bIsLocked);
    
    UFUNCTION(BlueprintCallable)
    void SetPreUseState(uint8 UseModeIndex, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialVectorParameterValue(FName ParamName, FLinearColor ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaterialScalarParameterValue(FName ParamName, float ParamValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectVectorParameter(FName ParamName, const FVector& ParamValue, const FWeaponEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectMaterialParameter(FName ParamName, UMaterialInterface* ParamValue, const FWeaponEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectFloatParameter(FName ParamName, float ParamValue, const FWeaponEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectEmitterState(FName EmitterName, bool bEnabled, const FWeaponEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetEffectColorParameter(FName ParamName, const FLinearColor& ParamValue, const FWeaponEffectQueryData& QueryData);
    
    UFUNCTION(BlueprintCallable)
    void SetBoneVisibility(FName BoneName, bool bVisible, TEnumAsByte<EWeaponAttachmentVisibilityType> AttachmentType);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerUnlock();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSwitchMode(uint8 InputChannel, uint8 NextUseModeIndex, bool bForced);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopUsing(uint8 InputChannel, bool bForced);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopModeSwitch(uint8 InputChannel, uint8 ClientUseModeIndex);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartUsing(uint8 InputChannel, uint8 ClientPatternSeed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartReloading(uint8 UseModeIndex, bool bAuto);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetZoomState(uint8 UseModeIndex, const FWeaponZoomState& NewState, float ZoomStartOffset);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetPatternSeed(uint8 ClientPatternSeed);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerRestartAutoUse();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerLock(float Duration);
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerInterruptReloadToUse(int32 ClientLoadedAmmo);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEquipInterruptible();
    
public:
    UFUNCTION(BlueprintCallable)
    void RegisterTrinketAttachment(const FWeaponRegisterTrinketAttachmentData& Data);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSkeletalControl(const FWeaponRegisterSkeletalControlData& Data);
    
    UFUNCTION(BlueprintCallable)
    void RegisterSimpleEffect(TEnumAsByte<EWeaponEffectType> EffectType, UParticleSystem* Effect, FName EffectSocket);
    
    UFUNCTION(BlueprintCallable)
    void RegisterMaterialEffect(const FWeaponRegisterMaterialEffectData& Data);
    
    UFUNCTION(BlueprintCallable)
    void RegisterEffect(const FWeaponRegisterAttachmentEffectData& Data);
    
    UFUNCTION(BlueprintCallable)
    void ReevaluateConditionalEffects();
    
    UFUNCTION(BlueprintCallable)
    void PrevZoomLevel();
    
    UFUNCTION(BlueprintCallable)
    void PlayEffects(TEnumAsByte<EWeaponEffectType> EffectType, uint8 UseModeIndex, int32 EffectID);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayDynamicMaterialEffect(const FWeaponMaterialEffectData& Data);
    
    UFUNCTION(BlueprintCallable)
    float PlayAnimation(UAnimMontage* Anim, bool bFirstPerson, float PlayRate, float Duration);
    
protected:
    UFUNCTION()
    void OnZoomedOut();
    
    UFUNCTION()
    void OnUseStarted();
    
    UFUNCTION()
    void OnUseFinished();
    
    UFUNCTION()
    void OnUpdateSkeletalControlsWhenUseFinishes();
    
    UFUNCTION()
    void OnUpdateSkeletalControlsWhenUsed();
    
    UFUNCTION()
    void OnUpdateSkeletalControlsWhenAmmoChanges();
    
    UFUNCTION()
    void OnRep_TargetLockedChanged();
    
    UFUNCTION()
    void OnRep_PendingUseModeIndex();
    
    UFUNCTION()
    void OnRep_PendingAttachState();
    
    UFUNCTION()
    void OnRep_CurrentUseModeIndex(uint8 PreviousUseModeIndex);
    
    UFUNCTION()
    void OnReloadEnded(bool bCompleted);
    
    UFUNCTION()
    void OnAmmoGivenToEmptyWeapon();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifySkeletalControl(TEnumAsByte<EWeaponEffectType> ControlType, FName ControlName, EWeaponSkeletalControlEvent Event, float EventValue);
    
    UFUNCTION(BlueprintCallable)
    void NextZoomLevel();
    
    UFUNCTION(BlueprintCallable)
    void Lock(float Duration, bool bReplicate);
    
private:
    UFUNCTION(BlueprintCallable)
    void K2_StopWeaponActionObj(UGbxAction* WeaponAction);
    
    UFUNCTION(BlueprintCallable)
    UGbxAction* K2_PlayWeaponActionEx(TEnumAsByte<EWeaponActionType> WeaponAction, FActionState_Base ActionParams, bool bCheckForRelevancy);
    
    UFUNCTION(BlueprintCallable)
    UGbxAction* K2_PlayWeaponAction(TEnumAsByte<EWeaponActionType> WeaponAction, float PlayRate, float Duration, bool bCheckForRelevancy);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsZoomedIn(bool bIncludeTransitions) const;
    
    UFUNCTION(BlueprintPure)
    bool IsZoomed() const;
    
    UFUNCTION(BlueprintPure)
    bool IsUsing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsTargetLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsSwitchingModes() const;
    
    UFUNCTION(BlueprintPure)
    bool IsReloading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPuttingDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPendingUse(uint8 InputChannel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocked() const;
    
    UFUNCTION(BlueprintPure)
    bool IsLocalAuthority() const;
    
    UFUNCTION(BlueprintPure)
    bool IsInactive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsEquipping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAuthorityUsing() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAuthoritySwitchingModes() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAuthorityReloading() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAuthorityPuttingDown() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAuthorityEquipping() const;
    
    UFUNCTION(BlueprintPure)
    bool IsActive() const;
    
    UFUNCTION(BlueprintCallable)
    void GivenTo(APawn* NewOwner);
    
    UFUNCTION(BlueprintPure)
    float GetZoomFOVScale() const;
    
    UFUNCTION(BlueprintPure)
    float GetZoomEffect() const;
    
    UFUNCTION(BlueprintPure)
    float GetZoomDuration() const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetUseModeComponentByClass(TSubclassOf<UActorComponent> ComponentClass, uint8 UseModeIndex) const;
    
    UFUNCTION(BlueprintNativeEvent)
    float GetMuteADSAlpha() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxZoomFOVScale() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetLastInputChannel() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetCurrentReloadPartType() const;
    
    UFUNCTION(BlueprintPure)
    UMeshComponent* GetAttachmentMesh(bool bFirstPerson, uint8 SlotIndex) const;
    
    UFUNCTION(BlueprintPure)
    UActorComponent* GetAssociatedUseModeComponentByClass(TSubclassOf<UActorComponent> ComponentClass, UActorComponent* ReferenceComponent) const;
    
    UFUNCTION(BlueprintPure)
    UAimAssistParameters* GetAimAssistParameters() const;
    
    UFUNCTION(BlueprintCallable)
    void EquipInterruptible();
    
    UFUNCTION(BlueprintCallable)
    void Dropped();
    
    UFUNCTION(BlueprintCallable)
    void CycleZoomLevel();
    
protected:
    UFUNCTION(Client, Reliable)
    void ClientUnlock();
    
    UFUNCTION(Client, Reliable)
    void ClientStopReloading();
    
    UFUNCTION(Client, Reliable)
    void ClientLock(float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    uint8 AddUseMode(UWeaponUseComponent* UseComponent, const TArray<UActorComponent*>& OtherComponents, int32 InputChannels);
    
    UFUNCTION(BlueprintCallable)
    void Activate(APawn* WeaponOwner, uint8 InSlot, EWeaponEquipType InEquipType);
    
    
    // Fix for true pure virtual functions not being implemented
};

