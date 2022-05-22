#pragma once
#include "CoreMinimal.h"
#include "HornSequenceEntry.generated.h"

USTRUCT(BlueprintType)
struct FHornSequenceEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float StartTime;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    OAKGAME_API FHornSequenceEntry();
};

