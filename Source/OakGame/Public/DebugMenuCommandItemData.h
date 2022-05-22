#pragma once
#include "CoreMinimal.h"
#include "DebugMenuCommandItemData.generated.h"

USTRUCT(BlueprintType)
struct FDebugMenuCommandItemData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Category;
    
    UPROPERTY()
    FText Label;
    
    UPROPERTY()
    FText Description;
    
    UPROPERTY()
    FString ExecCommand;
    
    OAKGAME_API FDebugMenuCommandItemData();
};

