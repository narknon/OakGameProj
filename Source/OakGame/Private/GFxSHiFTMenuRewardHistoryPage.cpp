#include "GFxSHiFTMenuRewardHistoryPage.h"
#include "GFxSHiftMenuRewardHistoryPageItem.h"

class UGbxGFxButton;

void UGFxSHiFTMenuRewardHistoryPage::OnClickCodeRedemption(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) {
}

UGFxSHiFTMenuRewardHistoryPage::UGFxSHiFTMenuRewardHistoryPage() {
    this->NoRewardTextField = NULL;
    this->MainRewardList = NULL;
    this->CodeRedemptionMenuButton = NULL;
    this->RewardHistoryMenuButton = NULL;
    this->AccountNameTextField = NULL;
    this->DiamondKeyTextField = NULL;
    this->GoldenkeyTextField = NULL;
    this->NonEmptyRewardScaleformClass = TEXT("RewardHiistoryEntry");
    this->NonEmptyRewardScaleformClassSplit = TEXT("RewardHiistoryEntrySplit");
    this->ListItemNativeClass = UGFxSHiftMenuRewardHistoryPageItem::StaticClass();
}

