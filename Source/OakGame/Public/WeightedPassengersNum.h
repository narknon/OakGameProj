#pragma once
#include "CoreMinimal.h"
#include "WeightedPassengersNum.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FWeightedPassengersNum {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 PassengerCount;
    
    UPROPERTY(EditAnywhere)
    float Weight;
    
    FWeightedPassengersNum();
};

