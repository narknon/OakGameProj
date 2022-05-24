#pragma once
#include "CoreMinimal.h"
#include "GFxIronbearWeaponWidget.h"
#include "GFxIronbearMinigun.generated.h"

class UGbxGFxObject;
class UWeaponHeatComponent;

UCLASS(NonTransient)
class OAKGAME_API UGFxIronbearMinigun : public UGFxIronbearWeaponWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* OverheatAnimation;
    
    UPROPERTY(Export, Transient)
    UWeaponHeatComponent* CachedHeatComponent;
    
public:
    UGFxIronbearMinigun();
};

