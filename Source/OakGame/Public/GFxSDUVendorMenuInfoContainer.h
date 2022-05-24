#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxSDUVendorMenuInfoContainer.generated.h"

class UGbxTextField;
class UGFxCurrencyCounterClip;
class UOakSDUData;

UCLASS(NonTransient)
class UGFxSDUVendorMenuInfoContainer : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* PlayerIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* UpgradeTextClip;
    
    UPROPERTY(Transient)
    UGFxCurrencyCounterClip* CurrencyClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContextualSelectClip;
    
    UPROPERTY(Transient)
    UGbxTextField* OwnedTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* AmmoTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* OwnedAmountClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TotalAmountClip;
    
    UPROPERTY(Transient)
    UOakSDUData* LastViewedSDUData;
    
    UPROPERTY(Transient)
    int32 LastViewedSDULevel;
    
    UPROPERTY(Transient)
    int32 LastOwnedCurrencyQuantity;
    
public:
    UGFxSDUVendorMenuInfoContainer();
};

