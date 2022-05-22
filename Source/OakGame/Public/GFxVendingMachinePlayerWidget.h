#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxVendingMachinePlayerWidget.generated.h"

class UGbxGFxProgressBar;
class UGFxCurrencyCounterClip;

UCLASS(NonTransient)
class OAKGAME_API UGFxVendingMachinePlayerWidget : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FText PurchasedText;
    
    UPROPERTY(EditAnywhere)
    FText SoldText;
    
    UPROPERTY(EditAnywhere)
    FText HealthFullText;
    
    UPROPERTY(EditAnywhere)
    FText AmmoFullText;
    
    UPROPERTY(EditAnywhere)
    FText BagFullText;
    
    UPROPERTY(EditAnywhere)
    FText InsufficientFundsText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* VendingPlayerWidgetTopClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* VendingPlayerWidgetClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* VendingShieldClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* VendingHealthClip;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* CurrencyWidgetClip;
    
public:
    UGFxVendingMachinePlayerWidget();
};

