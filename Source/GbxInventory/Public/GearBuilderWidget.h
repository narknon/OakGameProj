#pragma once
#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "InventoryBalanceStateInitializationData.h"
#include "GearBuilderWidget.generated.h"

class UGearBuilderDebugMenu;
class UObject;

UCLASS()
class GBXINVENTORY_API UGearBuilderWidget : public UWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UGearBuilderDebugMenu* OwnerMenu;
    
    UPROPERTY(Transient)
    FInventoryBalanceStateInitializationData GearData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UObject> SelectedItem;
    
public:
    UGearBuilderWidget();
};

