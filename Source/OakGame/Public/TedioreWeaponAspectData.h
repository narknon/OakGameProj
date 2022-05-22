#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "TedioreWeaponAspectData.generated.h"

class UTedioreBehavior;

UCLASS(EditInlineNew)
class UTedioreWeaponAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly, Instanced)
    UTedioreBehavior* TedioreBehavior;
    
public:
    UTedioreWeaponAspectData();
};

