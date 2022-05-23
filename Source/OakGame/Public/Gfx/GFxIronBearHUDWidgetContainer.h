#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UIHardpointData.h"
#include "GFxIronBearHUDWidgetContainer.generated.h"

class UGFxIronbearWeaponWidget;

UCLASS()
class OAKGAME_API UGFxIronBearHUDWidgetContainer : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FUIHardpointData HardPointFramesTable[7];
    
private:
    UPROPERTY(Transient)
    TArray<UGFxIronbearWeaponWidget*> WidgetsToTick;
    
    UPROPERTY(EditAnywhere)
    FString IronbearLeftWidgetID;
    
    UPROPERTY(EditAnywhere)
    FString IronbearRightWidgetID;
    
public:
    UGFxIronBearHUDWidgetContainer();
};

