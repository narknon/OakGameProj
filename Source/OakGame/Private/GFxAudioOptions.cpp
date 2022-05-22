#include "GFxAudioOptions.h"

class UGbxGFxListItemSpinner;
class UGbxGFxListItemNumber;
class UGbxGFxListCell;

void UGFxAudioOptions::OnVOVolumeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAudioOptions::OnVoiceVolumeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAudioOptions::OnSpeakerSetupChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAudioOptions::OnSoundEffectsVolumeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAudioOptions::OnPushToTalkChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAudioOptions::OnMuteAudioOnFocusLossChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAudioOptions::OnMusicVolumeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAudioOptions::OnMasterVolumeChanged(UGbxGFxListItemNumber* Item) {
}

void UGFxAudioOptions::OnEnableWindowsSpatialChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAudioOptions::OnControllerAudioChanged(UGbxGFxListItemSpinner* Item) {
}

void UGFxAudioOptions::OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem) {
}

void UGFxAudioOptions::OnContentPanelItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo) {
}

UGFxAudioOptions::UGFxAudioOptions() {
    this->MasterVolumeItem = NULL;
    this->MusicVolumeItem = NULL;
    this->SoundEffectsVolumeItem = NULL;
    this->VOVolumeItem = NULL;
    this->VoiceVolumeItem = NULL;
    this->AlternateBkg = NULL;
    this->PreviewAudioStopEvent = NULL;
}

