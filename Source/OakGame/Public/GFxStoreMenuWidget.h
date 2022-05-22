#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxStoreMenuWidget.generated.h"

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsShowing;
    
public:
    UGFxStoreMenuWidget();
};

