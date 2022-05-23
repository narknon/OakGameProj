#pragma once
#include "CoreMinimal.h"
#include "WwisePlaybackInstance.h"
#include "GFxOptionBase.h"
#include "GbxMenuInputEvent.h"
#include "GFxAudioOptions.generated.h"

class UGbxGFxListCell;
class UWwiseEvent;
class UGbxGFxListItemSpinner;
class UGbxGFxObject;
class UGbxGFxListItemNumber;

UCLASS(EditInlineNew)
class UGFxAudioOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* MasterVolumeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* MusicVolumeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* SoundEffectsVolumeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* VOVolumeItem;
    
    UPROPERTY(Transient)
    UGbxGFxListItemNumber* VoiceVolumeItem;
    
    UPROPERTY(Transient)
    UGbxGFxObject* AlternateBkg;
    
    UPROPERTY(Transient)
    FWwisePlaybackInstance PreviewAudioPlaybackInstance;
    
    UPROPERTY(Transient)
    UWwiseEvent* PreviewAudioStopEvent;
    
public:
    UGFxAudioOptions();
private:
    UFUNCTION()
    void OnVOVolumeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnVoiceVolumeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnSpeakerSetupChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnSoundEffectsVolumeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnPushToTalkChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMuteAudioOnFocusLossChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMusicVolumeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnMasterVolumeChanged(UGbxGFxListItemNumber* Item);
    
    UFUNCTION()
    void OnEnableWindowsSpatialChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnControllerAudioChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnContentPanelSelectionChanged(UGbxGFxListCell* SelectedItem);
    
    UFUNCTION()
    void OnContentPanelItemClicked(UGbxGFxListCell* ClickedItem, const FGbxMenuInputEvent& InputInfo);
    
};

