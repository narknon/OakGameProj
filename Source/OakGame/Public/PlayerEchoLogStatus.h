#pragma once
#include "CoreMinimal.h"
#include "PlayerEchoLogStatus.generated.h"

class UEchoLogData;

USTRUCT()
struct FPlayerEchoLogStatus {
    GENERATED_BODY()
public:
    UPROPERTY()
    UEchoLogData* EchoLogData;
    
    OAKGAME_API FPlayerEchoLogStatus();
};

