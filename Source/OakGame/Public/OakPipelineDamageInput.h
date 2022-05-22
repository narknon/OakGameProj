#pragma once
#include "CoreMinimal.h"
#include "PipelineDamageInput.h"
#include "OakPipelineDamageInput.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct OAKGAME_API FOakPipelineDamageInput : public FPipelineDamageInput {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameStatData* KillStat;
    
    FOakPipelineDamageInput();
};

