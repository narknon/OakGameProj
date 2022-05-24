#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxListCellUpdateInfo.h"
#include "GbxGFxMenu.h"
#include "GFxItemInspectionCategoryInfo.h"
#include "EGFxItemInspectionPages.h"
#include "GFxItemInspectionPageData.h"
#include "GFxItemInspectionElementalPage.h"
#include "UObject/NoExportTypes.h"
#include "GFxItemInspectionInspectPage.h"
#include "GFxItemInspectionManufacturerPage.h"
#include "GFxItemInspectionPartsPage.h"
#include "GFxItemInspectionSkinsPage.h"
#include "ItemInspectionSelectedPartData.h"
#include "GFXItemInspectionPartEnumTable.h"
#include "UObject/NoExportTypes.h"
#include "InventoryListEntryHandle.h"
#include "GFxItemInspectionLocator.h"
#include "UObject/NoExportTypes.h"
#include "GbxMenuInputEvent.h"
#include "GFxItemInspectionMenu.generated.h"

class UInventoryListComponent;
class USwfMovie;
class UInventoryBalanceStateComponent;
class AOakWeapon;
class AOakUIActorContainer;
class AActor;
class UGbxMenuData;
class UTexture;
class UUIStatData_Attribute;
class UGbxGFxObject;
class UGFxLoadedItemCard;
class UGbxGFxMenuSwitcherNavWidget;
class UInventoryCategoryData;
class UInventoryPartData;
class UWeaponSkinPartData;
class UGbxGFxSprite;
class UGbxGFxButton;

UCLASS(Abstract)
class OAKGAME_API UGFxItemInspectionMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    FText DefaultSkinNameText;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxItemInspectionPageData> PageDatas;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AOakUIActorContainer> ItemInspectionContainerClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FGFxItemInspectionCategoryInfo> CategoryInfos;
    
    UPROPERTY(EditAnywhere)
    int32 MaxPrimaryStatsDisplayed;
    
    UPROPERTY(EditAnywhere)
    int32 MaxSecondaryStatsDisplayed;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionInspectPage InspectPage;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionManufacturerPage ManufacturerPage;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionElementalPage ElementalPage;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionPartsPage PartsPage;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionSkinsPage SkinsPage;
    
    UPROPERTY(EditAnywhere)
    FString ItemScoreTextHTMLColor;
    
    UPROPERTY(EditAnywhere)
    float ItemStatBaseSize;
    
    UPROPERTY(EditAnywhere)
    float ItemStatMainSateSpacing;
    
    UPROPERTY(EditAnywhere)
    float ItemStatSecondaryStatsSpacing;
    
    UPROPERTY(EditAnywhere)
    FLinearColor ItemPartInspectionOutlineColor;
    
    UPROPERTY(EditAnywhere)
    float ItemPartInspectionFocusInterpolationRate;
    
    UPROPERTY(EditAnywhere)
    FItemInspectionSelectedPartData PartInspectionSelectedPartData;
    
    UPROPERTY(EditAnywhere)
    FLinearColor PartLineColor;
    
    UPROPERTY(EditAnywhere)
    float PartLineThickness;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> ItemTypeEnumToIconFrame;
    
    UPROPERTY(EditAnywhere)
    FGFXItemInspectionPartEnumTable PartEnumTable;
    
    UPROPERTY(EditAnywhere)
    UGbxMenuData* FullScreenMovieMenuData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> NoSkinTexture;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakWeapon> EridianFabricatorClass;
    
    UPROPERTY(EditAnywhere)
    TArray<UUIStatData_Attribute*> PartInspectionStats;
    
private:
    UPROPERTY(Transient)
    TArray<EGFxItemInspectionPages> AvailablePages;
    
    UPROPERTY(Transient)
    bool bMenuHasStarted;
    
    UPROPERTY(Transient)
    bool bHasSetInspectionItem;
    
    UPROPERTY(Transient)
    bool bItemCardReady;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* ItemCard;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MouseDragArea;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NavAnimClip;
    
    UPROPERTY(Transient)
    UGbxGFxMenuSwitcherNavWidget* NavBarClip;
    
    UPROPERTY(Transient)
    AOakUIActorContainer* ItemInspectionContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> ItemInspectionActor;
    
    UPROPERTY(Transient)
    FTransform BaseTransform;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInventoryCategoryData> SourceCategory;
    
    UPROPERTY(Transient)
    FInventoryListEntryHandle InspectionSourceItemHandle;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UInventoryListComponent> InspectionSourceInventoryList;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AActor> InspectionSourceActor;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UInventoryBalanceStateComponent> InspectionSourceBalanceComponent;
    
    UPROPERTY(Transient)
    TArray<UInventoryPartData*> InspectionPartList;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UInventoryPartData> SelectedPart;
    
    UPROPERTY(EditAnywhere)
    FGFxItemInspectionLocator PreviewLocator;
    
    UPROPERTY(Transient)
    int32 CurrentPageIndex;
    
    UPROPERTY(Transient)
    bool bIsInSkins;
    
    UPROPERTY(Transient)
    FVector2D LastMousePos;
    
    UPROPERTY(Transient)
    bool bRMBDown;
    
    UPROPERTY(Transient)
    bool bLMBDown;
    
    UPROPERTY(Transient)
    UGbxGFxSprite* LineDrawObject;
    
    UPROPERTY(Transient)
    FVector2D CurrentLineTarget;
    
    UPROPERTY(Transient)
    bool bHasPreviewSkin;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UWeaponSkinPartData> PreviewSkin;
    
    UPROPERTY(Transient)
    bool bCanChangeSkins;
    
    UPROPERTY(Transient)
    bool bIsUIHidden;
    
public:
    UGFxItemInspectionMenu();
protected:
    UFUNCTION()
    void OnTabClicked(FName ItemId) const;
    
    UFUNCTION()
    void OnSkinsListCellFocused(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnSkinsListCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnSkinsListArrowClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPartsListCellFocused(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnPartsListCellClicked(const FGbxGFxListCellUpdateInfo& UpdateInfo) const;
    
    UFUNCTION()
    void OnManufacturerPlayClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnInventoryItemUpdated(const FInventoryListEntryHandle& UpdatedItemHandle) const;
    
    UFUNCTION()
    void OnChallengeClassLoaded() const;
    
};

