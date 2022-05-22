#pragma once
#include "CoreMinimal.h"
#include "RushStackInstance.generated.h"

class USirenRushStackData;

USTRUCT(BlueprintType)
struct FRushStackInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    USirenRushStackData* StackData;
    
public:
    OAKGAME_API FRushStackInstance();
};

