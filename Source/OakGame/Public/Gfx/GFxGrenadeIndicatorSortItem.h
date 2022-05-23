#pragma once
#include "CoreMinimal.h"
#include "GFxGrenadeIndicatorSortItem.generated.h"

class AOakProjectile;

USTRUCT(BlueprintType)
struct FGFxGrenadeIndicatorSortItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    AOakProjectile* Grenade;
    
    UPROPERTY(Transient)
    float DistSq;
    
    OAKGAME_API FGFxGrenadeIndicatorSortItem();
};

