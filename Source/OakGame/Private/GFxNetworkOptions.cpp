#include "GFxNetworkOptions.h"

class UGbxGFxListItemSpinner;

void UGFxNetworkOptions::OnTradeRequestSpinner(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnToastLifetimeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnToastFrequencyChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnStreamingServiceChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnRareChestEventEnabledChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnPinataEventEnabledChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnNetworkTypeChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnMoxxisDrinkEventEnabledChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnMoxxisDrinkEventBitsProductIdChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnMatchmakingRegionChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnIncreasedChanceForSubscribersChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnHideTextChatSpinner(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnFriendSyncStateChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnExtractionEventEnabledChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnCrossplayStateChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnBadassEventEnabledChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxNetworkOptions::OnBadassEventCooldownChanged(UGbxGFxListItemSpinner* Item) {
}

UGFxNetworkOptions::UGFxNetworkOptions() {
    this->NetworkModeSpinner = NULL;
    this->CrossplayStateSpinner = NULL;
    this->FriendSyncStateSpinner = NULL;
    this->bForceStreamingServiceReset = false;
}

