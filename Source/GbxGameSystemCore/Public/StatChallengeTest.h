#pragma once
#include "CoreMinimal.h"
#include "ChallengeGoalValue.h"
#include "StatChallengeTest.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct FStatChallengeTest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGameStatData* StatId;
    
    UPROPERTY(EditAnywhere)
    TArray<FChallengeGoalValue> GoalInfo;
    
    UPROPERTY()
    TArray<int32> GoalValues;
    
    UPROPERTY(EditAnywhere)
    bool bUseLocalStat;
    
    UPROPERTY(EditAnywhere)
    bool bResetLocalStatWhenGoalReached;
    
    GBXGAMESYSTEMCORE_API FStatChallengeTest();
};

