#pragma once
#include "CoreMinimal.h"
#include "LootablePileInteractionResponse.generated.h"

class ULootSpawnPatternData;

USTRUCT(BlueprintType)
struct FLootablePileInteractionResponse {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ULootSpawnPatternData* LootPatternOverride;
    
    UPROPERTY(EditAnywhere)
    float DisturbBoneForce;
    
    OAKGAME_API FLootablePileInteractionResponse();
};

