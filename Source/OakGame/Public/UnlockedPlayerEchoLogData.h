#pragma once
#include "CoreMinimal.h"
#include "UnlockedPlayerEchoLogData.generated.h"

class UEchoLogData;

USTRUCT(BlueprintType)
struct FUnlockedPlayerEchoLogData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEchoLogData* EchoLogData;
    
    OAKGAME_API FUnlockedPlayerEchoLogData();
};

