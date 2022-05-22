#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "EWeaponUseMode.h"
#include "WeaponUseModeAspectData.generated.h"

class UWeaponUseComponent;

UCLASS(EditInlineNew)
class UWeaponUseModeAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    EWeaponUseMode UseMode;
    
    UPROPERTY(EditInstanceOnly)
    int32 UseModeBitmask;
    
    UPROPERTY(EditInstanceOnly)
    int32 InputChannelBitmask;
    
    UPROPERTY(EditInstanceOnly, Instanced)
    UWeaponUseComponent* WeaponUseComponent;
    
public:
    UWeaponUseModeAspectData();
};

