#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuData.h"
#include "GbxGFxMenuSwitcherSubmenuInfo.h"
#include "GbxGFxMenuSwitcherMenuData.generated.h"

UCLASS()
class GBXUI_API UGbxGFxMenuSwitcherMenuData : public UGbxGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<FGbxGFxMenuSwitcherSubmenuInfo> CurrentSubmenus;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    TArray<FGbxGFxMenuSwitcherSubmenuInfo> Submenus;
    
public:
    UGbxGFxMenuSwitcherMenuData();
};

