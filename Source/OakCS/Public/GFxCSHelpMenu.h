#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSHelpMenu.generated.h"

class UGbxGFxButton;
class UGFxCSButton;
class UGbxGFxObject;

UCLASS()
class OAKCS_API UGFxCSHelpMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGFxCSButton* RulesTab;
    
    UPROPERTY(Transient)
    UGFxCSButton* ControllerTab;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RulesContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* HelpContainer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ControlsContainer;
    
    UPROPERTY(Transient)
    UGFxCSButton* CloseButton;
    
public:
    UGFxCSHelpMenu();
private:
    UFUNCTION()
    void OnCloseClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

