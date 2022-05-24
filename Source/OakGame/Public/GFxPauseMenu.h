#pragma once
#include "CoreMinimal.h"
#include "GFxMainAndPauseBaseMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "Engine/Scene.h"
#include "GbxMenuInputEvent.h"
#include "GFxPauseMenu.generated.h"

class AOakGameState;
class UGbxMenuData;
class UGbxGFxGridScrollingList;
class UTravelStationData;
class UGbxGFxButton;
class UGbxGFxDialogBox;

UCLASS()
class OAKGAME_API UGFxPauseMenu : public UGFxMainAndPauseBaseMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(EditDefaultsOnly)
    float BlendWeight;
    
    UPROPERTY(EditDefaultsOnly)
    TSoftObjectPtr<UGbxMenuData> CharacterSelectMenu;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ContentPanel;
    
    UPROPERTY(Transient)
    UTravelStationData* AbandonDestination;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AOakGameState> OakGameState;
    
public:
    UGFxPauseMenu();
private:
    UFUNCTION()
    void OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnResumeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitToDesktopSaveComplete(const FString& SlotName, bool bSuccess) const;
    
    UFUNCTION()
    void OnQuitGameClicked(const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPhotoModeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers) const;
    
    UFUNCTION()
    void OnNewsWidgetClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMultiplayerDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLeaveModeClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLeaveChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnDebugMenuClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnConfirmMatchClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnConfirmCharacterClicked(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnAchievementsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

