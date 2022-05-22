#pragma once
#include "CoreMinimal.h"
#include "AvailableAmmoType.generated.h"

class UOakDebugWeaponBuilderButton;
class UGbxAmmoTypeData;

USTRUCT(BlueprintType)
struct FAvailableAmmoType {
    GENERATED_BODY()
public:
    UPROPERTY()
    UGbxAmmoTypeData* AmmoType;
    
    UPROPERTY(Export)
    UOakDebugWeaponBuilderButton* OptionButton;
    
    OAKGAME_API FAvailableAmmoType();
};

