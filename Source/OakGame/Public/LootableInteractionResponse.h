#pragma once
#include "CoreMinimal.h"
#include "LootableInteractionResponse.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FLootableInteractionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* TransitionAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* IdleAnimation;
    
    OAKGAME_API FLootableInteractionResponse();
};

