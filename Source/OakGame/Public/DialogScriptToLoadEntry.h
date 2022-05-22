#pragma once
#include "CoreMinimal.h"
#include "DialogScriptToLoadEntry.generated.h"

class UDialogScriptData;

USTRUCT(BlueprintType)
struct FDialogScriptToLoadEntry {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleDefaultsOnly)
    FString DialogScriptLevelName;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UDialogScriptData> DialogScriptToLoad;
    
    OAKGAME_API FDialogScriptToLoadEntry();
};

