#pragma once
#include "CoreMinimal.h"
#include "GFxQuickChangeMenuBase.h"
#include "InventoryListEntryHandle.h"
#include "GFxQuickChangeMenuStore.generated.h"

class UInventoryCategoryData;
class UGbxTextField;
class UGbxCustomizationData;
class UGFxCurrencyCounterClip;
class UGbxGFxObject;
class UGFxBaseQuickChangeMenuItem;
class UGFxCustomizationUnlockedWidget;
class UGFxSoldOutAnimationWidget;
class UPlayerShopManagerComponent;
class UInventoryListComponent;
class AOakCharacter;

UCLASS()
class OAKGAME_API UGFxQuickChangeMenuStore : public UGFxQuickChangeMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInventoryCategoryData* EridiumResourceData;
    
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationData*> DebugCustomizationsArray;
    
    UPROPERTY(Transient)
    TArray<UGbxCustomizationData*> CrazyEarlCustomizationList;
    
private:
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* PlayerEridiumCounter;
    
    UPROPERTY(Transient)
    UGbxTextField* InsufficientFundsTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* InsufficientFundsTextShadowClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InsufficientFundsObj;
    
    UPROPERTY(Transient)
    UGFxBaseQuickChangeMenuItem* CachedClickedItem;
    
    UPROPERTY(Transient)
    UGFxCustomizationUnlockedWidget* CustomizationUnlockedWidget;
    
    UPROPERTY(Transient)
    UGFxSoldOutAnimationWidget* SoldOutWidget;
    
    UPROPERTY(Export, Transient)
    UPlayerShopManagerComponent* ShopMgr;
    
    UPROPERTY(Export, Transient)
    UInventoryListComponent* InventoryList;
    
    UPROPERTY(Transient)
    AOakCharacter* CachedOakCharacter;
    
public:
    UGFxQuickChangeMenuStore();
private:
    UFUNCTION()
    void OnInventoryQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
    UFUNCTION()
    void extPlayAnimationFinished() const;
    
};

