#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GFxStoreMenuBrowserWidget.generated.h"

class UGFxStoreMenuBrowserItemWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuBrowserWidget : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<UGFxStoreMenuBrowserItemWidget*> ButtonClips;
    
public:
    UGFxStoreMenuBrowserWidget();
};

