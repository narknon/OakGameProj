#pragma once
#include "CoreMinimal.h"
#include "TestMapMenuEntry.generated.h"

USTRUCT()
struct FTestMapMenuEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    FText DisplayName;
    
    UPROPERTY()
    FString MapName;
    
    OAKGAME_API FTestMapMenuEntry();
};

