#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "GbxMenuSwitcherSubmenu.generated.h"

class UGbxMenuSwitcher;

UCLASS(EditInlineNew)
class GBXUI_API UGbxMenuSwitcherSubmenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UGbxMenuSwitcher> OwnerMenuSwitcher;
    
    UGbxMenuSwitcherSubmenu();
};

