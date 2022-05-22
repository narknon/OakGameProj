#pragma once
#include "CoreMinimal.h"
#include "LoadGameMenuEntry.generated.h"

USTRUCT(BlueprintType)
struct FLoadGameMenuEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FString SaveGameName;
    
    UPROPERTY()
    int32 CharacterLevel;
    
    UPROPERTY()
    FName CharacterClassName;
    
    UPROPERTY()
    uint32 SaveGameId;
    
    OAKGAME_API FLoadGameMenuEntry();
};

