#pragma once
#include "CoreMinimal.h"
#include "OakGFxMenuData.h"
#include "GFxEchoNetSubMenuData.generated.h"

UCLASS()
class UGFxEchoNetSubMenuData : public UOakGFxMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShouldDisplayInMainMenus;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresOnline;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresLan;
    
    UPROPERTY(EditAnywhere)
    bool bRequiresInGame;
    
    UGFxEchoNetSubMenuData();
};

