#pragma once
#include "CoreMinimal.h"
#include "LevelPersistence_Actor_SaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FLevelPersistence_Actor_SaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName ActorName;
    
    UPROPERTY()
    int32 TimerRemaining;
    
    OAKGAME_API FLevelPersistence_Actor_SaveGameData();
};

