#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "WeaponFoleyAspectData.generated.h"

class UFoleyAccessoryComponent;

UCLASS(EditInlineNew)
class UWeaponFoleyAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
    UPROPERTY(EditInstanceOnly, Instanced)
    UFoleyAccessoryComponent* FoleyAccessory;
    
    UPROPERTY(EditInstanceOnly)
    FName AttachmentSocket;
    
    UWeaponFoleyAspectData();
};

