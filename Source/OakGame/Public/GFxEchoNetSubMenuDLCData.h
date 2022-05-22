#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetSubMenuData.h"
#include "GFxEchoNetSubMenuDLCData.generated.h"

UCLASS()
class UGFxEchoNetSubMenuDLCData : public UGFxEchoNetSubMenuData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText SubmenuName;
    
    UPROPERTY(EditAnywhere)
    FName MenuID;
    
    UGFxEchoNetSubMenuDLCData();
};

