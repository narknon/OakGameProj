#pragma once
#include "CoreMinimal.h"
#include "WeightedActorPartData.h"
#include "AvailablePartData.generated.h"

class UOakDebugWeaponBuilderButton;

USTRUCT(BlueprintType)
struct FAvailablePartData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FWeightedActorPartData PartData;
    
    UPROPERTY(Export)
    UOakDebugWeaponBuilderButton* OptionButton;
    
    OAKGAME_API FAvailablePartData();
};

