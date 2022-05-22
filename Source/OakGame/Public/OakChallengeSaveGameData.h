#pragma once
#include "CoreMinimal.h"
#include "OakChallengeStatSaveGameData.h"
#include "OakChallengeSaveGameData.generated.h"

class UChallenge;

USTRUCT(BlueprintType)
struct FOakChallengeSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 CompletedCount;
    
    UPROPERTY()
    bool bIsActive;
    
    UPROPERTY()
    bool bCurrentlyCompleted;
    
    UPROPERTY()
    int32 CompletedProgressLevel;
    
    UPROPERTY()
    int32 ProgressCounter;
    
    UPROPERTY()
    TArray<FOakChallengeStatSaveGameData> StatInstanceState;
    
    UPROPERTY()
    TArray<bool> RewardTiersClaimed;
    
private:
    UPROPERTY()
    TSoftClassPtr<UChallenge> ChallengeClassPath;
    
    UPROPERTY(Transient)
    UChallenge* DefaultChallengeObj;
    
public:
    OAKGAME_API FOakChallengeSaveGameData();
};

