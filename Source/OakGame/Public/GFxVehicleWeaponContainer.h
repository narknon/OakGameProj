#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "GFxVehicleWeaponContainer.generated.h"

class UGFxVehicleWeaponWidget;

UCLASS()
class OAKGAME_API UGFxVehicleWeaponContainer : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGFxVehicleWeaponWidget* LeftWeaponWidget;
    
    UPROPERTY(Transient)
    UGFxVehicleWeaponWidget* RightWeaponWidget;
    
    UPROPERTY(Transient)
    FString LeftWeaponWidgetID;
    
    UPROPERTY(Transient)
    FString RightWeaponWidgetID;
    
    UGFxVehicleWeaponContainer();
};

