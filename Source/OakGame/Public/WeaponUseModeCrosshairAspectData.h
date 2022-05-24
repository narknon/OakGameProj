#pragma once
#include "CoreMinimal.h"
#include "EWeaponUseMode.h"
#include "InventoryAspectData.h"
#include "WeaponUseModeCrosshairAspectData.generated.h"

class UGbxCrosshairDataAsset;

UCLASS(EditInlineNew)
class UWeaponUseModeCrosshairAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    EWeaponUseMode UseMode;
    
    UPROPERTY(EditInstanceOnly)
    UGbxCrosshairDataAsset* CrosshairData;
    
    UPROPERTY(EditInstanceOnly)
    UGbxCrosshairDataAsset* ZoomedCrosshairData;
    
public:
    UWeaponUseModeCrosshairAspectData();
};

