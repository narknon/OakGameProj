#pragma once
#include "CoreMinimal.h"
#include "PlayerExperienceFormula.generated.h"

USTRUCT(BlueprintType)
struct FPlayerExperienceFormula {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    OAKGAME_API FPlayerExperienceFormula();
};

