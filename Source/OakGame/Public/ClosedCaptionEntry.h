#pragma once
#include "CoreMinimal.h"
#include "ClosedCaptionEntry.generated.h"

class UGbxTextField;

USTRUCT(BlueprintType)
struct OAKGAME_API FClosedCaptionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxTextField* LineField;
    
    UPROPERTY(Transient)
    float RemainingLifetime;
    
    FClosedCaptionEntry();
};

