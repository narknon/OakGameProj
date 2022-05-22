#include "GFxEchoCastMenu.h"

class UGbxGFxListItemSpinner;
class UGbxGFxDialogBox;
class UGbxGFxListCell;

void UGFxEchoCastMenu::OnStreamStatusUpdated(bool bIsLiveStreaming) const {
}

void UGFxEchoCastMenu::OnStreamingServiceChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnSettingsSelectionChanged(UGbxGFxListCell* SelectedItem) const {
}

void UGFxEchoCastMenu::OnRestoreDefaultChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const {
}

void UGFxEchoCastMenu::OnRareChestEventEnabledChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnPinataEventEnabledChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnMoxxisDrinkEventEnabledChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnMoxxisDrinkEventBitsProductIdChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnIsLiveStreamingUpdated(bool bIsLiveStreaming) const {
}

void UGFxEchoCastMenu::OnIncreasedChanceForSubscribersChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnExtractionEventEnabledChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnBadassEventEnabledChanged(UGbxGFxListItemSpinner* Item) const {
}

void UGFxEchoCastMenu::OnBadassEventCooldownChanged(UGbxGFxListItemSpinner* Item) const {
}

UGFxEchoCastMenu::UGFxEchoCastMenu() {
    this->MenuDescription = NULL;
    this->DescriptionPanel = NULL;
    this->DescriptionTitleTextField = NULL;
    this->DescriptionTextField = NULL;
    this->SettingsPanel = NULL;
    this->SettingsList = NULL;
    this->StatusPanel = NULL;
    this->ShiftAccountStateTextField = NULL;
    this->StreamingServiceStateTextField = NULL;
    this->AccountNameTextField = NULL;
    this->ExtensionVersionTextField = NULL;
    this->StreamChannelTitleTextField = NULL;
    this->ViewerCountTextField = NULL;
    this->NotificationPanel = NULL;
    this->NotificationDescriptionTextField = NULL;
    this->bForceStreamingServiceReset = false;
    this->ServiceUpdateTimer = -1.00f;
}

