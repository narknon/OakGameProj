#pragma once
#include "CoreMinimal.h"
#include "GFxCSSubMenu.h"
#include "GbxMenuInputEvent.h"
#include "GFxCSBoosterShopMenu.generated.h"

class UGbxGFxGridScrollingList;
class UGbxGFxDialogBox;
class UBoosterData;
class UGFxCSBoosterItem;
class UGbxGFxButton;

UCLASS()
class OAKCS_API UGFxCSBoosterShopMenu : public UGFxCSSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FText BuyBoosterMessageHeader;
    
    UPROPERTY(EditDefaultsOnly)
    FText BuyBoosterMessage;
    
    UPROPERTY(EditDefaultsOnly)
    int32 NumBoosterItemByRow;
    
    UPROPERTY(EditDefaultsOnly)
    UBoosterData* BoosterData;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* BoosterList;
    
    UPROPERTY(Transient)
    UGFxCSBoosterItem* ClickedBoosterItem;
    
public:
    UGFxCSBoosterShopMenu();
private:
    UFUNCTION()
    void OnCSBucksAmountChanged(int32 NewAmount) const;
    
    UFUNCTION()
    void OnConfirmPurchase(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBoosterItemClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
};

