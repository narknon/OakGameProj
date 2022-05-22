#pragma once
#include "CoreMinimal.h"
#include "EmitterFloatParam.generated.h"

USTRUCT(BlueprintType)
struct FEmitterFloatParam {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    float Value;
    
    GBXGAMESYSTEMCORE_API FEmitterFloatParam();
};

