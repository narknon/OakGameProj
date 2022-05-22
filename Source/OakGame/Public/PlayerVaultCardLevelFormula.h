#pragma once
#include "CoreMinimal.h"
#include "PlayerVaultCardLevelFormula.generated.h"

USTRUCT(BlueprintType)
struct FPlayerVaultCardLevelFormula {
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
    
    OAKGAME_API FPlayerVaultCardLevelFormula();
};

