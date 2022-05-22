#pragma once
#include "CoreMinimal.h"
#include "GFxStoreMenuDLCItem.h"
#include "GbxGFxMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GFxStoreMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxStoreMenu.generated.h"

class UOakThumbnailManager;
class UGbxGFxButton;
class UGFxStoreMenuItemBrowserWidget;
class UGFxStoreMenuDetailsWidget;

UCLASS()
class OAKGAME_API UGFxStoreMenu : public UGbxGFxMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FString> SampleTextureUrls;
    
private:
    UPROPERTY(Transient)
    UGFxStoreMenuItemBrowserWidget* ItemBrowserWidgetClip;
    
    UPROPERTY(Transient)
    UGFxStoreMenuDetailsWidget* DetailsWidgetClip;
    
    UPROPERTY(Transient)
    TArray<FGFxStoreMenuDLCItem> AllDLCDatas;
    
    UPROPERTY(Transient)
    TArray<FGFxStoreMenuPage> Pages;
    
    UPROPERTY(Transient)
    UOakThumbnailManager* PreviewImageManager;
    
    UPROPERTY(Transient)
    bool bPreviewImagesNeedRefresh;
    
public:
    UGFxStoreMenu();
    UFUNCTION()
    void OnPreviewImageLoaded() const;
    
    UFUNCTION()
    void OnClickStoreButton(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

