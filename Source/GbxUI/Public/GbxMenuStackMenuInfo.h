#pragma once
#include "CoreMinimal.h"
#include "BaseMenuStackMenuInfo.h"
#include "GbxMenuStackMenuInfo.generated.h"

class UGbxMenu;
class IGbxMenu;
class UGbxMenuData;

UCLASS()
class GBXUI_API UGbxMenuStackMenuInfo : public UBaseMenuStackMenuInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TScriptInterface<IGbxMenu> MenuObject;
    
    UPROPERTY(Transient)
    UGbxMenuData* MenuData;
    
    UGbxMenuStackMenuInfo();
};

