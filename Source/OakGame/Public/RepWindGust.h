#pragma once
#include "CoreMinimal.h"
#include "RepWindGust.generated.h"

USTRUCT(BlueprintType)
struct FRepWindGust {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 Seed;
    
    OAKGAME_API FRepWindGust();
};

