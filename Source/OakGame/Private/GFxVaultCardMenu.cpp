#include "GFxVaultCardMenu.h"

class ALootableObject;
class AActor;
class UGbxGFxListCell;

void UGFxVaultCardMenu::SetAdjancenyInfoForCells() const {
}

void UGFxVaultCardMenu::OnStandInActorCreated(AActor* InStandInActor) const {
}

void UGFxVaultCardMenu::OnRewardsListScrollBarUpdated(float SliderPercentage) const {
}

void UGFxVaultCardMenu::OnRewardItemCardReady() const {
}

void UGFxVaultCardMenu::OnPlayerOpenChest(ALootableObject* InLootable) const {
}

void UGFxVaultCardMenu::OnNavCellSelectionChanged(UGbxGFxListCell* ListItem) const {
}

void UGFxVaultCardMenu::OnItemCardReady() const {
}

void UGFxVaultCardMenu::OnChestOpeningAnimationComplete(ALootableObject* InLootable) const {
}

void UGFxVaultCardMenu::extOpenChestAnimationComplete() const {
}

UGFxVaultCardMenu::UGFxVaultCardMenu() {
    this->RewardsClip = NULL;
    this->RewardsRowClip = NULL;
    this->RewardHeaderIconClip = NULL;
    this->FloatingPanelKeyIconClip = NULL;
    this->ChallengePanelKeyIconClip = NULL;
    this->FloatingPanelClip = NULL;
    this->ChallengePanelClip = NULL;
    this->NavBarList = NULL;
    this->NavBarHintPrev = NULL;
    this->NavBarHintNext = NULL;
    this->VaultCardTitleTextField = NULL;
    this->VaultCardChestContainer = NULL;
    this->VaultCardLootableChest = NULL;
    this->ThumbnailManager = NULL;
    this->ItemCardBase = NULL;
    this->ItemCardReward = NULL;
    this->RewardTypeClip = NULL;
    this->ChestRewardTitleText = FText::FromString(TEXT("Rewards"));
    this->ChestRewardDescText = FText::FromString(TEXT("UNLOCKED!"));
    this->PurchaseRewardSoundFX = TEXT("Buy");
    this->InsufficientFundsSoundFX = TEXT("NoMoney");
    this->OpenChestSoundFX = TEXT("Open");
    this->RedeemRewardSoundFX = TEXT("Confirm");
    this->StartInspectItemSoundFX = TEXT("Vending_Item_Inspect");
    this->VaultCardChestContainerClass = NULL;
    this->MysteryGearClass = NULL;
    this->OperativeStandInClass = NULL;
    this->GunnerStandInClass = NULL;
    this->BeastmasterStandInClass = NULL;
    this->SirenStandInClass = NULL;
    this->ItemCardMovie = NULL;
    this->ItemInspectionMenuData = NULL;
    this->NumberOfVisibleRewardRows = 7;
    this->NumberOfVisibleRewardRows_Split = 5;
}

