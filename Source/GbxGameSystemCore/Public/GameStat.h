#pragma once
#include "CoreMinimal.h"
#include "GameStat.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGameStat {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGameStatData* GameStat;
    
    UPROPERTY()
    int32 StatValue;
    
    FGameStat();
};

