#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxMenuSwitcherSubmenuInfo.generated.h"

class UGbxGFxMenuData;
class UGbxGFxMenuSwitcherSubmenu;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxGFxMenuSwitcherSubmenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName MenuID;
    
    UPROPERTY(EditAnywhere)
    FText MenuName;
    
    UPROPERTY(EditAnywhere)
    FText MenuDescription;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxMenuData* MenuData;
    
    UPROPERTY(EditAnywhere)
    UGbxGFxMenuData* MenuData_NoCrossplay;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxGFxMenuSwitcherSubmenu> MenuClass;
    
    UPROPERTY(EditAnywhere)
    bool bAddToNav;
    
    FGbxGFxMenuSwitcherSubmenuInfo();
};

