#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "GbxFeedbackBase.h"
#include "GameFramework/ForceFeedbackEffect.h"
#include "AttributeInitializationData.h"
#include "Curves/CurveFloat.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RadialBlurSelection -FallbackName=RadialBlurSelection
#include "UObject/NoExportTypes.h"
#include "EScreenParticleScalingMode.h"
#include "GbxFeedbackData.generated.h"

class UForceFeedbackEffect;
class UCameraShake;
class UParticleSystem;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxFeedbackData : public UGbxFeedbackBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    int32 FeedbackType;
    
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> ControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<UForceFeedbackEffect*> ExternalControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<FForceFeedbackChannelDetails> MinControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    TArray<UForceFeedbackEffect*> MinExternalControllerRumbleDetails;
    
    UPROPERTY(EditAnywhere)
    bool bAbsoluteControllerRumbleScale;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeBase;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UCameraShake> CameraShakeDirectionalY;
    
    UPROPERTY(EditAnywhere)
    float RandomShakeInterval;
    
    UPROPERTY(EditAnywhere)
    float MaxRandomShakeScalar;
    
    UPROPERTY(EditAnywhere)
    float MinRandomShakeScalar;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUnique;
    
    UPROPERTY(EditAnywhere)
    bool bUseContinuousAttributeScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ContinuousScale;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ContinuousScaleCurve;
    
    UPROPERTY(EditAnywhere)
    bool bScaleDownOverTime;
    
    UPROPERTY(EditAnywhere)
    bool bUseScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ScaleOverTimeCurve;
    
    UPROPERTY(EditAnywhere)
    bool bPlayRadialBlur;
    
    UPROPERTY(EditAnywhere)
    FRadialBlurSelection RadialBlurInfo;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideRadialBlurCenter;
    
    UPROPERTY(EditAnywhere)
    bool bUseContextAsWorldSpaceCenter;
    
    UPROPERTY(EditAnywhere)
    FVector RadialBlurWorldSpaceCenter;
    
    UPROPERTY(EditAnywhere)
    float RadialBlurMaxDistance;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ScreenParticles;
    
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
    bool bLetSystemFinishAfterStopping;
    
    UGbxFeedbackData();
};

