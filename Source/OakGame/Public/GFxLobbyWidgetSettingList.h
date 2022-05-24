#pragma once
#include "CoreMinimal.h"
#include "GbxGFxRadioButtonList.h"
#include "GbxMenuInputEvent.h"
#include "GFxLobbyWidgetSettingList.generated.h"

class UGbxGFxButton;
class UGbxGFxMenu;

UCLASS(NonTransient)
class UGFxLobbyWidgetSettingList : public UGbxGFxRadioButtonList {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TWeakObjectPtr<UGbxGFxMenu> OwningMenu;
    
public:
    UGFxLobbyWidgetSettingList();
private:
    UFUNCTION()
    void OnSettingListItemUnhovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSettingListHovered(UGbxGFxButton* HoveredButton, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnSettingItemFocused(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

