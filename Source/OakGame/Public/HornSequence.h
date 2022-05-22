#pragma once
#include "CoreMinimal.h"
#include "HornSequenceEntry.h"
#include "HornSequence.generated.h"

USTRUCT()
struct FHornSequence {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FHornSequenceEntry> HornSequence;
    
    OAKGAME_API FHornSequence();
};

