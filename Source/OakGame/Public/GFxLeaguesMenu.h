#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxStatusMenuSubmenu.h"
#include "GFxLeaguesMenuStandInState.h"
#include "GbxMenuInputEvent.h"
#include "GFxLeaguesMenu.generated.h"

class UGbxGFxLeaguesDetailsPanel;
class UOakChallenge;
class UGbxGFxSlider;
class UGbxTextField;
class UOakCustomizationData;
class UGbxGFxLeaguesBigPanelButton;
class UGbxGFxGridScrollingList;
class UGbxGFxHintWidget;
class UGbxGFxObject;
class UOakChallengesComponent;
class UPatchExpansionData;
class UChallenge;
class UGbxGFxLeagueMenuChestButton;
class UWeaponSkinPartData;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxLeaguesMenu : public UGFxStatusMenuSubmenu {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxLeaguesBigPanelButton* OverviewBigButton;
    
    UPROPERTY(Transient)
    UGbxGFxLeaguesBigPanelButton* ChallengesBigButton;
    
    UPROPERTY(Transient)
    UGbxTextField* ChallengesBigButtonLeagueField;
    
    UPROPERTY(Transient)
    UGbxTextField* ChallengesBigButtonProgressField;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* LeftNavButton;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* RightNavButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MainPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* LeagueTitleField;
    
    UPROPERTY(Transient)
    UGbxTextField* LeagueOverviewSubtitle;
    
    UPROPERTY(Transient)
    UGbxTextField* LeagueDetailsScrollableText;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* LeagueDetailsScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* LeagueDetailsScrollMask;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MasterChallengeRewardBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChestContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* ChallengesSubtitle;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ChallengesList;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* ChallengesListScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* RewardUnlocked;
    
    UPROPERTY(Transient)
    UGbxTextField* RewardUnlockedField;
    
    UPROPERTY(Transient)
    UGbxTextField* RewardUnlockedFieldShadow;
    
    UPROPERTY(Transient)
    UGbxTextField* RewardUnlockedSubtitle;
    
    UPROPERTY(Transient)
    UGbxGFxLeaguesDetailsPanel* DetailsPanel;
    
    UPROPERTY(Export, Transient)
    UOakChallengesComponent* OwnerChallengesComponent;
    
    UPROPERTY(Transient)
    TArray<TSubclassOf<UChallenge>> CurrentLeagueChallenges;
    
    UPROPERTY(Transient)
    UOakChallenge* CurrentMasterLeagueChallenge;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxLeagueMenuChestButton*> ChestButtons;
    
    UPROPERTY(Transient)
    TArray<UOakCustomizationData*> CurrentlyPreviewedCustomizations;
    
    UPROPERTY(Transient)
    UWeaponSkinPartData* OriginalWeaponSkin;
    
    UPROPERTY(Transient)
    UWeaponSkinPartData* PreviewedWeaponSkin;
    
    UPROPERTY(Transient)
    UPatchExpansionData* CurrentLeaguePatchData;
    
    UPROPERTY(Transient)
    FGFxLeaguesMenuStandInState CurrentStandInState;
    
    UGFxLeaguesMenu();
private:
    UFUNCTION()
    void OnOverviewBigButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChestButtonFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChestButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChallengesBigButtonClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnChallengeCellFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

