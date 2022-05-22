#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "OakUIInventoryItemDisplayInfo.h"
#include "GbxUmgMenu.h"
#include "VendingMachineMenu.generated.h"

class UGbxScrollBoxList;
class UImage;
class UTextBlock;
class UGbxListItem;
class AOakCharacter;
class UPlayerShopManagerComponent;
class UGbxUserWidget;

UCLASS(EditInlineNew)
class UVendingMachineMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* VendingMachineList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* HeaderText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* ItemFilterText;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UImage* BackgroundImage;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxListItem* FeaturedItemWidget;
    
    UPROPERTY()
    AOakCharacter* VendingMachineMenuCharacter;
    
    UPROPERTY()
    TArray<FOakUIInventoryItemDisplayInfo> ItemList;
    
private:
    UPROPERTY(Export)
    UPlayerShopManagerComponent* PlayerShopManager;
    
public:
    UVendingMachineMenu();
private:
    UFUNCTION()
    void OnVendingItemClicked(UGbxListItem* VendingItem);
    
    UFUNCTION()
    void OnFeaturedItemClicked(UGbxUserWidget* FeaturedItem, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void AddItemInWidget(const FOakUIInventoryItemDisplayInfo& Item);
    
};

