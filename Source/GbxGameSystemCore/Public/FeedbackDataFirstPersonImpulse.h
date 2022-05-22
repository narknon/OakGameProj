#pragma once
#include "CoreMinimal.h"
#include "GbxEasingFunc.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FeedbackDataFirstPersonImpulse.generated.h"

USTRUCT(BlueprintType)
struct FFeedbackDataFirstPersonImpulse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseDurationFromCameraShake;
    
    UPROPERTY(EditAnywhere)
    float CameraShakeDurationEaseInWeight;
    
    UPROPERTY(EditAnywhere)
    float EaseInDuration;
    
    UPROPERTY(EditAnywhere)
    float EaseOutDuration;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseInFunc;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc EaseOutFunc;
    
    UPROPERTY(EditAnywhere)
    FRotator RandomRotationOffset;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationExtent;
    
    UPROPERTY(EditAnywhere)
    bool bOffsetRotationByDirection;
    
    UPROPERTY(EditAnywhere)
    FVector RandomTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    FVector TranslationExtent;
    
    UPROPERTY(EditAnywhere)
    float ZoomedEffectScale;
    
    GBXGAMESYSTEMCORE_API FFeedbackDataFirstPersonImpulse();
};

