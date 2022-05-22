#pragma once
#include "CoreMinimal.h"
#include "NumericRange.h"
#include "LootableInteractionResponse.h"
#include "LootableDirectionalResponse.generated.h"

USTRUCT(BlueprintType)
struct FLootableDirectionalResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FNumericRange AngleRange;
    
    UPROPERTY(EditAnywhere)
    TArray<FLootableInteractionResponse> Interactions;
    
    OAKGAME_API FLootableDirectionalResponse();
};

