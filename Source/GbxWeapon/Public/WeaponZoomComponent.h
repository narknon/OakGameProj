#pragma once
#include "CoreMinimal.h"
#include "GbxReplicatorProxyData.h"
#include "Components/ActorComponent.h"
#include "ZoomStateChangeNoLevelDelegateDelegate.h"
#include "WeaponDebugInterface.h"
#include "WeaponZoomLevel.h"
#include "AttributeEffectData.h"
#include "ZoomStateChangeWithLevelDelegateDelegate.h"
#include "WeaponZoomState.h"
#include "GbxAttributeModifierHandle.h"
#include "WeaponZoomComponent.generated.h"

class UFeedbackData;
class AWeapon;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXWEAPON_API UWeaponZoomComponent : public UActorComponent, public IWeaponDebugInterface, public IGbxReplicatorProxyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FWeaponZoomLevel> ZoomLevels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InstigatorAccuracyScale;
    
    UPROPERTY(EditAnywhere)
    float ViewModelShotOffsetScale;
    
    UPROPERTY(EditAnywhere)
    float ViewModelLeadingScale;
    
    UPROPERTY(EditAnywhere)
    float MovementAnimationAlpha;
    
    UPROPERTY(EditAnywhere)
    float FlinchAnimationMagnitudeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bForceUnzoomWhenSwitchingModes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ModeFOVScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ModeTransitionDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EyeSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseScopeSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FrontScopeSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FrontSightSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName RearSightSocket;
    
    UPROPERTY(Replicated, Transient)
    float FOVScale;
    
    UPROPERTY(Replicated, Transient)
    float DurationScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bShowCrosshairWhenZoomed;
    
    UPROPERTY(EditAnywhere)
    bool bApplyAttributesWhenFullyZoomed;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> AttributeEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FAttributeEffectData> InstigatorAttributeEffects;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DepthOfFieldFocusSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableBlurVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideStartBlurVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideBlurVignetteSharpness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bEnableColorVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideStartColorVignetteSize: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideColorVignetteSharpness: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideLongitudinalMotionScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverrideLateralMotionScale: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartBlurVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BlurVignetteSharpness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ColorVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float StartColorVignetteSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ColorVignetteSharpness;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LongitudinalMotionScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LateralMotionScale;
    
    UPROPERTY(EditAnywhere)
    UFeedbackData* UseFeedback;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UseFeedbackScale;
    
    UPROPERTY(BlueprintAssignable)
    FZoomStateChangeWithLevelDelegate NotifyZoomingIn;
    
    UPROPERTY(BlueprintAssignable)
    FZoomStateChangeWithLevelDelegate NotifyZoomedIn;
    
    UPROPERTY(BlueprintAssignable)
    FZoomStateChangeWithLevelDelegate NotifyZoomingOut;
    
    UPROPERTY(BlueprintAssignable)
    FZoomStateChangeNoLevelDelegate NotifyZoomedOut;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bApplyWeaponModeZoom;
    
    UPROPERTY(Transient)
    FWeaponZoomState ZoomState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedZoomState)
    FWeaponZoomState ReplicatedZoomState;
    
    UPROPERTY(Transient)
    uint8 DesiredZoomLevel;
    
    UPROPERTY(Transient)
    float ZoomStartTime;
    
    UPROPERTY(Transient)
    float ZoomTransitionStartTime;
    
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> AttributeModifiers;
    
    UPROPERTY(Transient)
    TArray<FGbxAttributeModifierHandle> InstigatorAttributeModifiers;
    
    UPROPERTY(Transient)
    uint8 CachedWeaponModeIndex;
    
private:
    UPROPERTY(Transient)
    AWeapon* WeaponPrivate;
    
public:
    UWeaponZoomComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION()
    void OnSwitchedWeaponMode();
    
    UFUNCTION()
    void OnRep_ReplicatedZoomState();
    
    UFUNCTION()
    void OnDetached();
    
    UFUNCTION()
    void OnAttached();
    
public:
    UFUNCTION(BlueprintPure)
    float GetMaxZoomFOVScaleWithMode(uint8 ModeIndex) const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxZoomFOVScale() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

