#pragma once
#include "CoreMinimal.h"
#include "OakPhaseTranceLockEffectSpec.generated.h"

USTRUCT(BlueprintType)
struct FOakPhaseTranceLockEffectSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectMask;
    
    OAKGAME_API FOakPhaseTranceLockEffectSpec();
};

