#pragma once
#include "CoreMinimal.h"
#include "GameStatSaveGameData.generated.h"

class UGameStatData;

USTRUCT(BlueprintType)
struct FGameStatSaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    int32 StatValue;
    
private:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<UGameStatData> StatPath;
    
public:
    OAKGAME_API FGameStatSaveGameData();
};

