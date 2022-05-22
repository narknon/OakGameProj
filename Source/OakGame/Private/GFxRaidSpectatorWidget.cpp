#include "GFxRaidSpectatorWidget.h"

void UGFxRaidSpectatorWidget::OnRaidSpectatorTargetChanged(FText& NewSpectatorTargetName) const {
}

void UGFxRaidSpectatorWidget::OnNumSpectatablePlayersChanged(int32 NewNumSpectatablePlayers) const {
}

void UGFxRaidSpectatorWidget::OnInputDeviceChanged() const {
}

UGFxRaidSpectatorWidget::UGFxRaidSpectatorWidget() {
    this->HintBar = NULL;
    this->HintBarContainer = NULL;
    this->TargetPlayerName = NULL;
}

