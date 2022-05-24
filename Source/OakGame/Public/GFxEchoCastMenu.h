#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetSubMenu.h"
#include "LocalizationStatus.h"
#include "GbxMenuInputEvent.h"
#include "GFxEchoCastMenu.generated.h"

class UGbxGFxListCell;
class UEchoCastMenuDescription;
class UGbxGFxListItemSpinner;
class UGbxGFxObject;
class UGbxTextField;
class UGbxGFxGridScrollingList;
class UGbxGFxDialogBox;

UCLASS()
class UGFxEchoCastMenu : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UEchoCastMenuDescription* MenuDescription;
    
    UPROPERTY(EditAnywhere)
    FText SettingsPanelTitle;
    
    UPROPERTY(EditAnywhere)
    FLocalizationStatus LocalizationStatusPanel;
    
    UPROPERTY(EditAnywhere)
    FText NotificationTitle;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DescriptionPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTitleTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SettingsPanel;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* SettingsList;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StatusPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* ShiftAccountStateTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* StreamingServiceStateTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* AccountNameTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* ExtensionVersionTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* StreamChannelTitleTextField;
    
    UPROPERTY(Transient)
    UGbxTextField* ViewerCountTextField;
    
    UPROPERTY(Transient)
    UGbxGFxObject* NotificationPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* NotificationDescriptionTextField;
    
    UPROPERTY(Transient)
    bool bForceStreamingServiceReset;
    
    UPROPERTY(Transient)
    float ServiceUpdateTimer;
    
public:
    UGFxEchoCastMenu();
protected:
    UFUNCTION()
    void OnStreamStatusUpdated(bool bIsLiveStreaming) const;
    
    UFUNCTION()
    void OnStreamingServiceChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnSettingsSelectionChanged(UGbxGFxListCell* SelectedItem) const;
    
    UFUNCTION()
    void OnRestoreDefaultChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRareChestEventEnabledChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnPinataEventEnabledChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnMoxxisDrinkEventEnabledChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnMoxxisDrinkEventBitsProductIdChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnIsLiveStreamingUpdated(bool bIsLiveStreaming) const;
    
    UFUNCTION()
    void OnIncreasedChanceForSubscribersChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnExtractionEventEnabledChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnBadassEventEnabledChanged(UGbxGFxListItemSpinner* Item) const;
    
    UFUNCTION()
    void OnBadassEventCooldownChanged(UGbxGFxListItemSpinner* Item) const;
    
};

