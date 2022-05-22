#pragma once
#include "CoreMinimal.h"
#include "ImpactAudioParam.generated.h"

class UWwiseRtpc;
class UWwiseSwitch;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FImpactAudioParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    UWwiseRtpc* Parameter;
    
    UPROPERTY()
    UWwiseSwitch* Switch;
    
    UPROPERTY()
    float Value;
    
    FImpactAudioParam();
};

