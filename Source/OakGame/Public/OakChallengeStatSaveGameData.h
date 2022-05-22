#pragma once
#include "CoreMinimal.h"
#include "OakChallengeStatSaveGameData.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct FOakChallengeStatSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CurrentStatValue;
    
private:
    UPROPERTY()
    TSoftObjectPtr<UGameStatData> ChallengeStatPath;
    
public:
    OAKGAME_API FOakChallengeStatSaveGameData();
};

