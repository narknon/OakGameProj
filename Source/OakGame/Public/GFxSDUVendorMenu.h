#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "InventoryListEntryHandle.h"
#include "GFxSDUVendorMenu.generated.h"

class UGFxSDUVendorMenuInfoContainer;
class UInventoryCategoryData;
class USwfMovie;
class UOakSDUData;
class ASDUCaseProxy;
class UGFxLoadedItemCard;
class ASDUCase;
class UGFxTextFeedback;

UCLASS()
class UGFxSDUVendorMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USwfMovie* ItemCardMovie;
    
    UPROPERTY(EditAnywhere)
    float CurrencySpinnerOverrideHeight;
    
    UPROPERTY(EditAnywhere)
    float CurrencySpinnerSpinTime;
    
    UPROPERTY(EditAnywhere)
    float CurrencyWidgetPauseOnNewValueTime;
    
    UPROPERTY(EditAnywhere)
    FText SDUUnlockedText;
    
private:
    UPROPERTY(EditAnywhere)
    FName BuyItemSoundFX;
    
    UPROPERTY(EditAnywhere)
    FName WarningSoundFX;
    
    UPROPERTY(Transient)
    UGFxLoadedItemCard* LoadedItemCard;
    
    UPROPERTY(Transient)
    UGFxSDUVendorMenuInfoContainer* PlayerInfoContainerClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDUCase> SDUCase;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ASDUCaseProxy> SDUCaseProxy;
    
    UPROPERTY(Transient)
    UGFxTextFeedback* PurchasedItemText;
    
    UPROPERTY(Transient)
    UGFxTextFeedback* WarningText;
    
    UPROPERTY(Transient)
    bool bMenuContentReady;
    
    UPROPERTY(Transient)
    bool bGameDataReady;
    
    UPROPERTY(Transient)
    bool bItemCardReady;
    
public:
    UGFxSDUVendorMenu();
private:
    UFUNCTION()
    void OnSelectedSDUChanged(int32 CurrentSDULevel, UOakSDUData* SDUData) const;
    
    UFUNCTION()
    void OnSDUPurchased(UOakSDUData* OakSDUData, bool bIsSoldOut) const;
    
    UFUNCTION()
    void OnItemCardReady() const;
    
    UFUNCTION()
    void OnInsufficientFunds(UOakSDUData* OakSDUData) const;
    
    UFUNCTION()
    void OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
};

