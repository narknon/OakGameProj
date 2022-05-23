#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenuSwitcherMenuData.h"
#include "GFxStatusMenuData.generated.h"

class UObject;

UCLASS()
class UGFxStatusMenuData : public UGbxGFxMenuSwitcherMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FName FirstMenuToLookAt;
    
    UPROPERTY(Transient)
    UObject* FirstMenuSelectionObject;
    
    UGFxStatusMenuData();
};

