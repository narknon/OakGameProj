#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxStoreMenuItemBrowserPageWidget.generated.h"

class UGbxTextField;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuItemBrowserPageWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* PageTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PrevHintClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NextHintClip;
    
public:
    UGFxStoreMenuItemBrowserPageWidget();
};

