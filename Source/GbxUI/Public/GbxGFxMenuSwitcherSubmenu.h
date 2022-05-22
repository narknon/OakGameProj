#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxGFxMenuSwitcherSubmenu.generated.h"

class UGbxGFxMenuSwitcher;

UCLASS()
class GBXUI_API UGbxGFxMenuSwitcherSubmenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxMenuSwitcher> OwnerMenuSwitcher;
    
public:
    UGbxGFxMenuSwitcherSubmenu();
};

