#pragma once
#include "CoreMinimal.h"
#include "RumbleRemap.h"
#include "RemapByConsole.generated.h"

USTRUCT(BlueprintType)
struct FRemapByConsole {
    GENERATED_BODY()
public:
    UPROPERTY(Config, VisibleAnywhere)
    FString ConsoleName;
    
    UPROPERTY(Config, EditAnywhere)
    FRumbleRemap RemapValues;
    
    GBXFEEDBACK_API FRemapByConsole();
};

