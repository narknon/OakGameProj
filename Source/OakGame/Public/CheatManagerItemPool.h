#pragma once
#include "CoreMinimal.h"
#include "CheatManagerItemPool.generated.h"

USTRUCT()
struct FCheatManagerItemPool {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString ItemPool;
    
    UPROPERTY()
    int32 Quantity;
    
    OAKGAME_API FCheatManagerItemPool();
};

