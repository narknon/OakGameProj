#pragma once
#include "CoreMinimal.h"
#include "LevelPersistence_Actor_SaveGameData.h"
#include "LevelPersistence_Level_SaveGameData.generated.h"

USTRUCT(BlueprintType)
struct FLevelPersistence_Level_SaveGameData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName LevelName;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FLevelPersistence_Actor_SaveGameData> SavedActors;
    
    OAKGAME_API FLevelPersistence_Level_SaveGameData();
};

