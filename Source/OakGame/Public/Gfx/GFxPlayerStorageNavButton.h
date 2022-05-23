#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "EInventoryListType.h"
#include "GbxMenuInputEvent.h"
#include "EGbxFocusableWidgetState.h"
#include "GFxPlayerStorageNavButton.generated.h"

class UGFxPlayerStorageMenu;
class UGbxGFxObject;

UCLASS(NonTransient)
class UGFxPlayerStorageNavButton : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxPlayerStorageMenu> OwnerStorageMenu;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconClip;
    
    UPROPERTY(Transient)
    EInventoryListType NavToType;
    
public:
    UGFxPlayerStorageNavButton();
protected:
    UFUNCTION()
    void OnNavButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    FString GetNavFrameState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState ButtonState);
    
};

