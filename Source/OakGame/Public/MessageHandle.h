#pragma once
#include "CoreMinimal.h"
#include "MessageHandle.generated.h"

USTRUCT(BlueprintType)
struct FMessageHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint64 ID;
    
public:
    OAKGAME_API FMessageHandle();
};

