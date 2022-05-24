#pragma once
#include "CoreMinimal.h"
#include "GFxMainAndPauseBaseMenu.h"
#include "GFxFrontendTargetMenuInterface.h"
#include "GbxMenuInputEvent.h"
#include "GFxOakMainMenu.generated.h"

class UMaterialInterface;
class UGbxGFxObject;
class UGFxNewsMenuItemDataAsset;
class UGbxGFxButton;
class UGbxGFxMouseCapturePanel;
class UGbxGFxDialogBox;

UCLASS(Config=Game)
class UGFxOakMainMenu : public UGFxMainAndPauseBaseMenu, public IGFxFrontendTargetMenuInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UMaterialInterface* DarkenBackgroundMaterial;
    
    UPROPERTY(EditDefaultsOnly)
    float DarkenBackgroundTransitionTime;
    
    UPROPERTY(EditDefaultsOnly)
    FText SecondPlaythroughTitleText;
    
    UPROPERTY(EditDefaultsOnly)
    FText SecondPlaythroughMessageText;
    
    UPROPERTY(EditAnywhere)
    float MaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MouseMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float MaxSecondsToReachTargetSpeed;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MainMenuContainer;
    
    UPROPERTY(Transient)
    FText HostBreadcrumbDisplayText;
    
    UPROPERTY(Transient)
    TArray<UGFxNewsMenuItemDataAsset*> NewsItemsToView;
    
    UPROPERTY(Transient)
    UGbxGFxMouseCapturePanel* MouseCapturePanel;
    
    UPROPERTY(Transient)
    UGbxGFxDialogBox* CloudSaveProgressDialog;
    
public:
    UGFxOakMainMenu();
private:
    UFUNCTION()
    void OnUploadSaveClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnTrueVaultHunterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnTestMapsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnStoreClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnStartGameClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnStartDLCClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnSplitscreenClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnShiftClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnRosterClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitGameClicked(const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnQuitChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnPlayClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOtherButtonClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnOptionsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNewPlaythroughClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMultiplayerDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMatchmakingClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLoadGameClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLeaveGroupClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLanGamesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnEnableLeaguesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnDownloadSaveClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnDebugClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnCreditsClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnContinueClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChoiceMadeTravelToUnreachableDLC(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChoiceMadeSkipPlayableIntro(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBehindTheScenesClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBehindTheScenesCategoryClicked(UGbxGFxButton* PressedButton, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnBackOutToTitleChoiceMade(const UGbxGFxDialogBox* SourceDialog, const FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

