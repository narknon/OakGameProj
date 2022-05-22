#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxMenuSwitcherSubmenuInfo.generated.h"

class UGbxMenuData;
class UGbxMenuSwitcherSubmenu;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxMenuSwitcherSubmenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MenuID;
    
    UPROPERTY(EditAnywhere)
    FText MenuName;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* MenuData;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxMenuSwitcherSubmenu> MenuClass;
    
    FGbxMenuSwitcherSubmenuInfo();
};

