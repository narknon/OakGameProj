#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "FeedbackTableRowHandle.h"
#include "FeedbackDataFirstPersonImpulse.h"
#include "EFeedbackDataFirstPersonImpulseType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=FOscillator -FallbackName=FOscillator
#include "GameFramework/ForceFeedbackEffect.h"
#include "AttributeInitializationData.h"
#include "RangedDistanceOverrides.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ROscillator -FallbackName=ROscillator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=VOscillator -FallbackName=VOscillator
#include "ShakeScaleAssociation.h"
#include "UObject/NoExportTypes.h"
#include "EScreenParticleScalingMode.h"
#include "GbxHUDFeedbackImpulse.h"
#include "Curves/CurveFloat.h"
#include "LoopingShakeInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "UObject/NoExportTypes.h"
#include "FeedbackData.generated.h"

class UForceFeedbackEffect;
class UCameraShake;
class UFeedbackData;
class UParticleSystem;
class UObject;
class APlayerController;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UFeedbackData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 FeedbackType;
    
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> ControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<UForceFeedbackEffect*> ExternalForceFeedbackEffects;
    
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> MinControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<UForceFeedbackEffect*> MinExternalForceFeedbackEffects;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteControllerRumbleScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeClass;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeClassNegativeXAxis;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeClassYAxis;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeClassNegativeYAxis;
    
    UPROPERTY(VisibleAnywhere)
    float OscillationDuration;
    
    UPROPERTY(VisibleAnywhere)
    float OscillationBlendInTime;
    
    UPROPERTY(VisibleAnywhere)
    float OscillationBlendOutTime;
    
    UPROPERTY(VisibleAnywhere)
    FROscillator RotOscillation;
    
    UPROPERTY(VisibleAnywhere)
    FVOscillator LocOscillation;
    
    UPROPERTY(VisibleAnywhere)
    FFOscillator FOVOscillation;
    
    UPROPERTY(EditAnywhere)
    float RandomShakeInterval;
    
    UPROPERTY(EditAnywhere)
    float MaxRandomShakeScalar;
    
    UPROPERTY(EditAnywhere)
    float MinRandomShakeScalar;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData BaseCameraScale;
    
    UPROPERTY(EditAnywhere)
    TArray<FShakeScaleAssociation> AdditionalCameraShakes;
    
    UPROPERTY(EditAnywhere)
    EFeedbackDataFirstPersonImpulseType FirstPersonImpulseType;
    
    UPROPERTY(EditAnywhere)
    FFeedbackDataFirstPersonImpulse CustomFirstPersonImpulse;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(EditAnywhere)
    bool bHideWhenFinished;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContentDims;
    
    UPROPERTY(EditAnywhere)
    float ParticleDepth;
    
    UPROPERTY(EditAnywhere)
    EScreenParticleScalingMode ScalingMode;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyOwnerSee;
    
    UPROPERTY(EditAnywhere)
    bool bAlwaysVisible;
    
    UPROPERTY(EditAnywhere)
    bool bTickParticleEvenWhenPaused;
    
    UPROPERTY(EditAnywhere)
    FName Tag;
    
    UPROPERTY(EditAnywhere)
    bool bLetSystemFinishAfterStopping;
    
    UPROPERTY(EditAnywhere)
    FGbxHUDFeedbackImpulse HUDImpulse;
    
    UPROPERTY(EditAnywhere)
    bool bLooping;
    
    UPROPERTY(EditAnywhere)
    float EffectFalloffMinDistance;
    
    UPROPERTY(EditAnywhere)
    float EffectFalloffMaxDistance;
    
    UPROPERTY(EditAnywhere)
    TArray<UFeedbackData*> AssociatedFeedbacks;
    
    UPROPERTY(EditAnywhere)
    bool bUpdateSourceLocation;
    
    UPROPERTY(EditAnywhere)
    bool bScaleDownOverTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    bool bUseContinuousAttributeScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ContinuousScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ContinuousScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bPlayRadialBlur;
    
    UPROPERTY(EditAnywhere)
    FRadialBlurSelection RadialBlurInfo;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRadialBlurCenter;
    
    UPROPERTY(EditAnywhere)
    FVector RadialBlurWorldSpaceCenter;
    
    UPROPERTY(EditAnywhere)
    float RadialBlurMaxDistance;
    
private:
    UPROPERTY(Transient)
    TArray<FLoopingShakeInfo> LoopingShakes;
    
public:
    UFeedbackData();
    UFUNCTION(BlueprintCallable)
    static void StopFeedbackForAll(UFeedbackData* FeedbackData, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopFeedback(UFeedbackData* FeedbackData, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void StopDefaultFeedbackForAll(FFeedbackTableRowHandle Feedback, UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void StopDefaultFeedback(FFeedbackTableRowHandle Feedback, APlayerController* Controller);
    
    UFUNCTION(BlueprintCallable)
    static void PerformFeedbackForAllAtLocation(UFeedbackData* FeedbackData, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformFeedbackForAll(UFeedbackData* FeedbackData, float Scale, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformFeedbackAtLocation(UFeedbackData* FeedbackData, APlayerController* Controller, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformFeedback(UFeedbackData* FeedbackData, APlayerController* Controller, float Scale, bool bLoop, UObject* SourceContext);
    
    UFUNCTION(BlueprintCallable)
    static void PerformDefaultFeedbackForAllAtLocation(FFeedbackTableRowHandle Feedback, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformDefaultFeedbackForAll(FFeedbackTableRowHandle Feedback, float Scale, bool bLoop, UObject* WorldContextObject, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformDefaultFeedbackAtLocation(FFeedbackTableRowHandle Feedback, APlayerController* Controller, FVector SourceLocation, const FRangedDistanceOverrides RangedDistanceOverrides, bool bLoop, UObject* SourceContext, APlayerController* ControllerToIgnore, UFeedbackData* OverrideControllerFeedback);
    
    UFUNCTION(BlueprintCallable)
    static void PerformDefaultFeedback(FFeedbackTableRowHandle Feedback, APlayerController* Controller, float Scale, bool bLoop, UObject* SourceContext);
    
    UFUNCTION(BlueprintCallable)
    static float GetFeedbackDuration(UFeedbackData* FeedbackData);
    
    UFUNCTION(BlueprintCallable)
    static void GetFeedbackDataRange(UFeedbackData* FeedbackData, float& MinRange, float& MaxRange);
    
};

