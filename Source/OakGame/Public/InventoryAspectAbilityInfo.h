#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "InventoryAspectAbilityInfo.generated.h"

class UGbxAbility;

USTRUCT(BlueprintType)
struct FInventoryAspectAbilityInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAbility> Ability;
    
    OAKGAME_API FInventoryAspectAbilityInfo();
};

