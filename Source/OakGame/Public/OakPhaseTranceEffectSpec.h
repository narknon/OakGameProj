#pragma once
#include "CoreMinimal.h"
#include "PhaseTranceActivationComboData.h"
#include "OakPhaseTranceEffectSpec.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FOakPhaseTranceEffectSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 EffectMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FPhaseTranceActivationComboData ComboData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AActor* EffectTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageData;
    
    OAKGAME_API FOakPhaseTranceEffectSpec();
};

