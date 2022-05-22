#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenuData.h"
#include "GbxMenuSwitcherSubmenuInfo.h"
#include "GbxMenuSwitcherMenuData.generated.h"

UCLASS()
class GBXUI_API UGbxMenuSwitcherMenuData : public UGbxUmgMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxMenuSwitcherSubmenuInfo> Submenus;
    
    UGbxMenuSwitcherMenuData();
};

