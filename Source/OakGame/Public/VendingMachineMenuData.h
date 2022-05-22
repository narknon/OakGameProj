#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenuData.h"
#include "VendingMachineMenuFilter.h"
#include "Styling/SlateBrush.h"
#include "GFxBackpackWidgetConfig.h"
#include "VendingMachineMenuData.generated.h"

UCLASS()
class UVendingMachineMenuData : public UGbxUmgMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FVendingMachineMenuFilter> Filters;
    
    UPROPERTY(EditDefaultsOnly)
    FSlateBrush BackgroundImage;
    
    UPROPERTY(EditAnywhere)
    FGFxBackpackWidgetConfig BackpackConfig;
    
    UVendingMachineMenuData();
};

