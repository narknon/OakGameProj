#pragma once
#include "CoreMinimal.h"
#include "PlayerGuardianRankFormula.generated.h"

USTRUCT(BlueprintType)
struct FPlayerGuardianRankFormula {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BaseValue;
    
    UPROPERTY(EditAnywhere)
    float BaseMultiplier;
    
    UPROPERTY(EditAnywhere)
    float Multiplier;
    
    UPROPERTY(EditAnywhere)
    float Power;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    OAKGAME_API FPlayerGuardianRankFormula();
};

