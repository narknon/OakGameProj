#pragma once
#include "CoreMinimal.h"
#include "GbxDebugMenuSubmenu.h"
#include "GearBuilderDebugMenu.generated.h"

class UGearBuilderWidget;

UCLASS(EditInlineNew)
class GBXINVENTORY_API UGearBuilderDebugMenu : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Export)
    UGearBuilderWidget* GearBuilder;
    
public:
    UGearBuilderDebugMenu();
};

