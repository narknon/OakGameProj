#pragma once
#include "CoreMinimal.h"
#include "GFxStoreMenuDLCItem.h"
#include "GbxGFxButton.h"
#include "GFxStoreMenuBrowserItemWidget.generated.h"

class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuBrowserItemWidget : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* DiscountTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ItemPictureClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ItemTypeTextClip;
    
    UPROPERTY(Transient)
    FString PreviewImageUrl;
    
    UPROPERTY(Transient)
    bool bIsFeaturedType;
    
    UPROPERTY(Transient)
    FGFxStoreMenuDLCItem CurrentData;
    
public:
    UGFxStoreMenuBrowserItemWidget();
};

