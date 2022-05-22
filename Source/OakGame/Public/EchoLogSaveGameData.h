#pragma once
#include "CoreMinimal.h"
#include "EchoLogSaveGameData.generated.h"

class UEchoLogData;

USTRUCT(BlueprintType)
struct FEchoLogSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool bHasBeenSeenInLog;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UEchoLogData> EchoLogPath;
    
public:
    OAKGAME_API FEchoLogSaveGameData();
};

