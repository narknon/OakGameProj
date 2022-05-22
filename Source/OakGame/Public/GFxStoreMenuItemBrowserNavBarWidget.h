#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxMenuInputEvent.h"
#include "GFxStoreMenuItemBrowserNavBarWidget.generated.h"

class UGbxGFxHintWidget;
class UGFxStoreMenuNavBarTabButton;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuItemBrowserNavBarWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxStoreMenuNavBarTabButton*> TabButtonClips;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PrevHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextHintClip;
    
public:
    UGFxStoreMenuItemBrowserNavBarWidget();
private:
    UFUNCTION()
    void OnTabButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo);
    
};

