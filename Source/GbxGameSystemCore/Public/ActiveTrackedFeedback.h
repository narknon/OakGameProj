#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RangedDistanceOverrides.h"
#include "ActiveTrackedFeedback.generated.h"

class UFeedbackData;
class UObject;

USTRUCT(BlueprintType)
struct FActiveTrackedFeedback {
    GENERATED_BODY()
public:
    UPROPERTY()
    UFeedbackData* FeedbackData;
    
    UPROPERTY()
    float LastStartTime;
    
    UPROPERTY()
    float LastRandomShakeTime;
    
    UPROPERTY()
    float RandomCameraShake;
    
    UPROPERTY()
    float BaseScale;
    
    UPROPERTY()
    float CurrentScale;
    
    UPROPERTY()
    float CurrentCameraShakeScale;
    
    UPROPERTY()
    float CameraShakeXScale;
    
    UPROPERTY()
    float CameraShakeYScale;
    
    UPROPERTY()
    FVector SourceLocation;
    
    UPROPERTY()
    FRangedDistanceOverrides RangedDistanceOverrides;
    
    UPROPERTY()
    bool bRumbleFinished;
    
    UPROPERTY()
    bool bShakeFinished;
    
    UPROPERTY()
    TArray<float> AdditionalCameraShakeScales;
    
    UPROPERTY()
    TWeakObjectPtr<UObject> SourceContext;
    
    GBXGAMESYSTEMCORE_API FActiveTrackedFeedback();
};

