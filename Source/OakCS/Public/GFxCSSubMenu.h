#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcherSubmenu.h"
#include "GFxCSSubMenu.generated.h"

class UGFxCSButton;

UCLASS()
class OAKCS_API UGFxCSSubMenu : public UGbxGFxMenuSwitcherSubmenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxCSButton*> Buttons;
    
public:
    UGFxCSSubMenu();
};

