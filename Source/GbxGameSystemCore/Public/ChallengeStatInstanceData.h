#pragma once
#include "CoreMinimal.h"
#include "ChallengeStatInstanceData.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FChallengeStatInstanceData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameStatData* StatId;
    
    UPROPERTY()
    TSoftObjectPtr<UGameStatData> ChallengeStatPath;
    
    UPROPERTY()
    int32 CurrentStatValue;
    
    FChallengeStatInstanceData();
};

