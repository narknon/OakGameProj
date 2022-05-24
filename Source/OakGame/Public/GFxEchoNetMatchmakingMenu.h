#pragma once
#include "CoreMinimal.h"
#include "GFxEchoNetSubMenu.h"
#include "GFxEchoNetMatchmakingActivityData.h"
#include "GbxMenuInputEvent.h"
#include "GFxEchoNetMatchmakingMenu.generated.h"

class UGFxEchoNetMatchmakingInitializedWidget;
class UGFxEchoNetMatchmakingInfoPanelWidget;
class UGFxEchoNetMatchmakingModeSelectionWidget;
class UGbxGFxButton;
class UGbxGFxListCell;

UCLASS()
class OAKGAME_API UGFxEchoNetMatchmakingMenu : public UGFxEchoNetSubMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText NotificationText;
    
    UPROPERTY(EditAnywhere)
    FText MatchmakingInitalizedModeText;
    
    UPROPERTY(EditAnywhere)
    FText MatchmakingInitializedText;
    
    UPROPERTY(EditAnywhere)
    FText HeroicModeText;
    
    UPROPERTY(EditAnywhere)
    FText StandardModeText;
    
    UPROPERTY(EditAnywhere)
    FText MatchmakingInProgressText;
    
    UPROPERTY(EditAnywhere)
    FText ButtonStartText;
    
    UPROPERTY(EditAnywhere)
    FText ButtonCancelText;
    
    UPROPERTY(EditAnywhere)
    FText LockedText;
    
    UPROPERTY(EditAnywhere)
    float StartButtonLabelExtraPadding;
    
private:
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingInitializedWidget* MatchmakingModeInitializedClip;
    
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingInfoPanelWidget* MatchmakingInfoPanelClip;
    
    UPROPERTY(Transient)
    UGFxEchoNetMatchmakingModeSelectionWidget* ModeSelectionClip;
    
    UPROPERTY(Transient)
    TArray<FGFxEchoNetMatchmakingActivityData> ActivityListData;
    
    UPROPERTY(Transient)
    FString CurrentMatchmakingActivityGuid;
    
    UPROPERTY(Transient)
    FString QueuedMatchmakingActivityGuid;
    
    UPROPERTY(Transient)
    int32 CurrentSelectedActivityIdx;
    
    UPROPERTY(Transient)
    TArray<FString> MatchmakingRegions;
    
public:
    UGFxEchoNetMatchmakingMenu();
private:
    UFUNCTION()
    void OnMatchMakingButtonHeld(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMatchMakingButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnActivityItemFocused(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnActivityItemClicked(UGbxGFxListCell* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

