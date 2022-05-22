#pragma once
#include "CoreMinimal.h"
#include "LootableAnimState.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLootableAnimState {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bLooping;
    
    UPROPERTY()
    UAnimSequence* Animation;
    
    OAKGAME_API FLootableAnimState();
};

