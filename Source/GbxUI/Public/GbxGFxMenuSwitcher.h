#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxGFxMenuSwitcher.generated.h"

class UGbxGFxMenuSwitcherSubmenu;

UCLASS()
class GBXUI_API UGbxGFxMenuSwitcher : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxMenuSwitcherSubmenu> CurrentSubmenu;
    
    UPROPERTY(Transient)
    FName CurrentSubmenuId;
    
    UPROPERTY(Transient)
    FName PreviousSubmenuId;
    
    UPROPERTY(Transient)
    int32 NumSubMenus;
    
public:
    UGbxGFxMenuSwitcher();
};

