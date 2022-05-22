#pragma once
#include "CoreMinimal.h"
#include "InventoryAspectData.h"
#include "EWeaponUseMode.h"
#include "WeaponUseModeNameAspectData.generated.h"

class UUIStatData_Text;

UCLASS(EditInlineNew)
class UWeaponUseModeNameAspectData : public UInventoryAspectData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    EWeaponUseMode UseMode;
    
    UPROPERTY(EditInstanceOnly)
    UUIStatData_Text* UseModeName;
    
public:
    UWeaponUseModeNameAspectData();
};

