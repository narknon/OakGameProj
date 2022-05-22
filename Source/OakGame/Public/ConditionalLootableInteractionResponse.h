#pragma once
#include "CoreMinimal.h"
#include "LootableInteractionResponse.h"
#include "ConditionalLootableInteractionResponse.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FConditionalLootableInteractionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    FLootableInteractionResponse Interaction;
    
    OAKGAME_API FConditionalLootableInteractionResponse();
};

