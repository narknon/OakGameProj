#pragma once
#include "CoreMinimal.h"
#include "GFxOptionBase.h"
#include "GFxNetworkOptions.generated.h"

class UGbxGFxListItemSpinner;

UCLASS(EditInlineNew)
class UGFxNetworkOptions : public UGFxOptionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* NetworkModeSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* CrossplayStateSpinner;
    
    UPROPERTY(Transient)
    UGbxGFxListItemSpinner* FriendSyncStateSpinner;
    
    UPROPERTY(Transient)
    bool bForceStreamingServiceReset;
    
public:
    UGFxNetworkOptions();
private:
    UFUNCTION()
    void OnTradeRequestSpinner(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnToastLifetimeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnToastFrequencyChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnStreamingServiceChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnRareChestEventEnabledChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnPinataEventEnabledChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnNetworkTypeChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMoxxisDrinkEventEnabledChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMoxxisDrinkEventBitsProductIdChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnMatchmakingRegionChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnIncreasedChanceForSubscribersChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnHideTextChatSpinner(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnFriendSyncStateChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnExtractionEventEnabledChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnCrossplayStateChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBadassEventEnabledChanged(UGbxGFxListItemSpinner* Item);
    
    UFUNCTION()
    void OnBadassEventCooldownChanged(UGbxGFxListItemSpinner* Item);
    
};

