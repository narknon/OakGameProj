#pragma once
#include "CoreMinimal.h"
#include "InventoryListEntryHandle.h"
#include "GbxGFxHUDWidget.h"
#include "GFxCurrencyWidget.generated.h"

class UInventoryCategoryData;
class UGFxCurrencyCounterClip;
class UInventoryListComponent;
class UGbxInventoryCategoryData;
class AOakCharacter;

UCLASS()
class OAKGAME_API UGFxCurrencyWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float TotalSpinnerHeightOverride;
    
    UPROPERTY(EditAnywhere)
    float PauseOnNewValueTime;
    
    UPROPERTY(EditAnywhere)
    float CostSpinTime;
    
    UPROPERTY(EditDefaultsOnly)
    float DelayAfterResurrect;
    
    UPROPERTY(EditDefaultsOnly)
    float CostSpinTimeOnResurrect;
    
    UPROPERTY(EditDefaultsOnly)
    float PauseOnNewValueTimeOnResurect;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* CurrencyCounter;
    
    UPROPERTY(EditAnywhere)
    FString AnimationContainerID;
    
    UPROPERTY(Export, Transient)
    UInventoryListComponent* InventoryComponent;
    
    UPROPERTY(Transient)
    AOakCharacter* OakCharacter;
    
public:
    UGFxCurrencyWidget();
private:
    UFUNCTION()
    void OnPauseStateChanged(bool bPaused) const;
    
    UFUNCTION()
    void OnOwnerResurrected(int32 CashLost) const;
    
    UFUNCTION()
    void OnDisplayCurrencyWidgetOnHUD(UGbxInventoryCategoryData* CurrencyType) const;
    
    UFUNCTION()
    void OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const;
    
    UFUNCTION()
    void OnCurrencyDisplayCompleted() const;
    
};

