#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxSHiFTMenuPage.h"
#include "GbxMenuInputEvent.h"
#include "GFxSHiFTMenuRewardHistoryPage.generated.h"

class UGFxSHiftMenuRewardHistoryPageItem;
class UGbxTextField;
class UGbxGFxGridScrollingList;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxSHiFTMenuRewardHistoryPage : public UGFxSHiFTMenuPage {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* NoRewardTextField;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MainRewardList;
    
    UPROPERTY(Transient)
    UGbxGFxButton* CodeRedemptionMenuButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* RewardHistoryMenuButton;
    
    UPROPERTY(Transient)
    UGbxTextField* AccountNameTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* DiamondKeyTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* GoldenkeyTextField;
    
public:
    UPROPERTY(EditAnywhere)
    FString EmptyRewardScaleformClass;
    
    UPROPERTY(EditAnywhere)
    FString NonEmptyRewardScaleformClass;
    
    UPROPERTY(EditAnywhere)
    FString NonEmptyRewardScaleformClassSplit;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGFxSHiftMenuRewardHistoryPageItem> ListItemNativeClass;
    
    UGFxSHiFTMenuRewardHistoryPage();
private:
    UFUNCTION()
    void OnClickCodeRedemption(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
};

