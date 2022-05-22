#pragma once
#include "CoreMinimal.h"
#include "ExpAwardWeight.generated.h"

USTRUCT(BlueprintType)
struct FExpAwardWeight {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 Players;
    
    UPROPERTY(EditAnywhere)
    float KillerExpBonus;
    
    UPROPERTY(EditAnywhere)
    float ExpWeight;
    
    OAKGAME_API FExpAwardWeight();
};

