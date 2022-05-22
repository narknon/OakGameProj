#pragma once
#include "CoreMinimal.h"
#include "Curves/CurveFloat.h"
#include "CoordinatedAudioData.generated.h"

class UWwiseEvent;
class UWwiseRtpc;

USTRUCT(BlueprintType)
struct FCoordinatedAudioData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* WwiseEvent;
    
    UPROPERTY(EditDefaultsOnly)
    FName AttachmentName;
    
    UPROPERTY(EditDefaultsOnly)
    float StartTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DeactivateTime;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseRtpc* RtpcParam;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve RtpcValueOverTime;
    
    GBXGAMESYSTEMCORE_API FCoordinatedAudioData();
};

