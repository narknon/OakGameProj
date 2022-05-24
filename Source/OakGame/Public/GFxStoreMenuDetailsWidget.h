#pragma once
#include "CoreMinimal.h"
#include "GFxStoreMenuWidget.h"
#include "GFxStoreMenuDetailsWidget.generated.h"

class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class OAKGAME_API UGFxStoreMenuDetailsWidget : public UGFxStoreMenuWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DetailTitleClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DetailTypeClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DetailDescClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* InstalledClip;
    
    UPROPERTY(Transient)
    UGbxTextField* InstalledTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PurchasedClip;
    
    UPROPERTY(Transient)
    UGbxTextField* PurchasedTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* HintButtonClip;
    
public:
    UGFxStoreMenuDetailsWidget();
};

