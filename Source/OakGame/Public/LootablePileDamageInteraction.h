#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LootablePileInteractionResponse.h"
#include "LootablePileDamageInteraction.generated.h"

class UDamageSource;

USTRUCT(BlueprintType)
struct FLootablePileDamageInteraction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<TSubclassOf<UDamageSource>> DamageSources;
    
    UPROPERTY(EditAnywhere)
    FLootablePileInteractionResponse Response;
    
    OAKGAME_API FLootablePileDamageInteraction();
};

