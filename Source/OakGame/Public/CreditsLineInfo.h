#pragma once
#include "CoreMinimal.h"
#include "CreditsLineInfo.generated.h"

USTRUCT(BlueprintType)
struct FCreditsLineInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName StyleId;
    
    UPROPERTY()
    FText TextEntry;
    
    OAKGAME_API FCreditsLineInfo();
};

