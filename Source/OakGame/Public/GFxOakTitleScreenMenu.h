#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "OnSwitchToNextMenuDelegate.h"
#include "GbxMenuInputEvent.h"
#include "GFxOakTitleScreenMenu.generated.h"

class UGbxTextField;
class UGbxGFxDialogBox;

UCLASS()
class UGFxOakTitleScreenMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnSwitchToNextMenu OnSwitchToNextMenu;
    
private:
    UPROPERTY()
    UGbxTextField* GFxHintText;
    
public:
    UGFxOakTitleScreenMenu();
private:
    UFUNCTION()
    void OnQuitChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
};

