#pragma once
#include "CoreMinimal.h"
#include "GbxDebugMenuSubmenu.h"
#include "GbxDebugRumbleMenu.generated.h"

class UGbxListItem;
class UGbxListItemNumber;
class UGbxScrollBoxList;

UCLASS(EditInlineNew, Config=Game)
class GBXUI_API UGbxDebugRumbleMenu : public UGbxDebugMenuSubmenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float SliderStepSize;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* ContentPanel;
    
    UPROPERTY(Export, Transient)
    UGbxListItemNumber* LeftLargeSlider;
    
    UPROPERTY(Export, Transient)
    UGbxListItemNumber* LeftSmallSlider;
    
    UPROPERTY(Export, Transient)
    UGbxListItemNumber* RightLargeSlider;
    
    UPROPERTY(Export, Transient)
    UGbxListItemNumber* RightSmallSlider;
    
public:
    UGbxDebugRumbleMenu();
protected:
    UFUNCTION()
    void OnSliderValueChanged(UGbxListItem* Item);
    
};

