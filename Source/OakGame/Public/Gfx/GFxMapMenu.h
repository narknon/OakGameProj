#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GFxMapMenuStateInfo.h"
#include "GFxStatusMenuSubmenu.h"
#include "MissionIconObserverInterface.h"
#include "GFxMenuTutorialCollection.h"
#include "EGFxMapMenuState.h"
#include "ChallengeFilterType.h"
#include "UObject/NoExportTypes.h"
#include "GFxMapMenu_Adjustment.h"
#include "GbxGFxListItemDelegateDelegate.h"
#include "GbxMenuInputEvent.h"
#include "ZoneMapPOIEntry.h"
#include "GameFramework/OnlineReplStructs.h"
#include "ZoneMapIconInfo.h"
#include "OakUIChallengeListData.h"
#include "GFxMapMenu.generated.h"

class UGFxTutorialWidget;
class UGalaxyData;
class UZoneMapData;
class UPlanetData;
class UZoneMapPOITypeData;
class UOakUIChallengeDataProvider;
class UGbxGFxGridScrollingList;
class UGbxGFxListCell;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UGFxMapMenuProgressPanel;
class UGFxMapMenuCrosshair;
class UGbxGFxMouseCapturePanel;
class UGFxMapMenuZoomLevelInfo;
class UGFxMapDetailsPanel;
class UGbxTextField;
class UOakMinimapIconComponent;
class AZoneMapDisplayActor;
class UOakChallenge;
class UGbxGFxButton;

UCLASS()
class OAKGAME_API UGFxMapMenu : public UGFxStatusMenuSubmenu, public IMissionIconObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<EGFxMapMenuState, FGFxMapMenuStateInfo> StateInfoMap;
    
    UPROPERTY(EditAnywhere)
    EGFxMapMenuState InitialMenuState;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UGalaxyData> GalaxyDataRef;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UZoneMapData> SanctuaryLevelData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UPlanetData> SanctuaryPlanetData;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UZoneMapPOITypeData> FastTravelPOIType;
    
    UPROPERTY(EditAnywhere)
    FName Sanctuary3Name;
    
    UPROPERTY(EditAnywhere)
    float CameraMoveThreshold;
    
    UPROPERTY(EditAnywhere)
    float FriendStatusUpdateRateSeconds;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakUIChallengeDataProvider> ChallengeProviderClass;
    
    UPROPERTY(EditAnywhere)
    TArray<FChallengeFilterType> AvailableGalaxyChallengeFilters;
    
    UPROPERTY(EditAnywhere)
    TArray<FChallengeFilterType> AvailableZoneChallengeFilters;
    
    UPROPERTY(EditAnywhere)
    FGFxMenuTutorialCollection Tutorials;
    
    UPROPERTY(EditAnywhere)
    FName FirstTimeTutorial;
    
    UPROPERTY(EditAnywhere)
    FName FastTravelTutorial;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeShowStage1Index;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeShowStage2Index;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeShowStage3Index;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeShowStage4Index;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeShowStage5Index;
    
    UPROPERTY(EditAnywhere)
    int32 FirstTimeFreeNavigationIndex;
    
    UPROPERTY(EditAnywhere)
    int32 FastTravelOrbitZoomIndex;
    
    UPROPERTY(EditAnywhere)
    int32 FastTravelChooseZoneInfoIndex;
    
    UPROPERTY(EditAnywhere)
    int32 FastTravelChooseZoneIndex;
    
    UPROPERTY(EditAnywhere)
    int32 FastTravelChooseLocationIndex;
    
    UPROPERTY(EditAnywhere)
    FVector2D FriendListSplitScreenScalePlayer0;
    
    UPROPERTY(EditAnywhere)
    FVector2D FriendListSplitScreenPositionPlayer0;
    
    UPROPERTY(EditAnywhere)
    FVector2D FriendListSplitScreenScalePlayer1;
    
    UPROPERTY(EditAnywhere)
    FVector2D FriendListSplitScreenPositionPlayer1;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingDown;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuOffsetExpandingUp;
    
    UPROPERTY(EditAnywhere)
    FVector2D ContextMenuScale;
    
    UPROPERTY(EditAnywhere)
    FGFxMapMenu_Adjustment ContextMenuAdjustmentHorizontalSplitScreen;
    
private:
    UPROPERTY(Transient)
    UGbxGFxObject* MenuRoot;
    
    UPROPERTY(Transient)
    UGFxMapMenuProgressPanel* ProgressPanel;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* NavBar;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* FastTravelList;
    
    UPROPERTY(Transient)
    FGbxGFxListItemDelegate TravelListSelectionChangedDelegate;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ChallengeList;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* FriendList;
    
    UPROPERTY(Transient)
    int32 CurrentGalaxyChallengeFilterIndex;
    
    UPROPERTY(Transient)
    int32 CurrentZoneChallengeFilterIndex;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ChallengeListWrapper;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ChallengeFilterHint;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconContainer;
    
    UPROPERTY(Transient)
    UGFxMapMenuCrosshair* CrosshairContainers[2];
    
    UPROPERTY(Transient)
    UGFxMapMenuCrosshair* CurrentCrosshair;
    
    UPROPERTY(Transient)
    UGbxGFxMouseCapturePanel* MouseCapturePanel;
    
    UPROPERTY(Transient)
    UGFxMapMenuZoomLevelInfo* ZoomLevelInfo;
    
    UPROPERTY(Transient)
    UGFxMapDetailsPanel* DetailsPanel;
    
    UPROPERTY(Transient)
    UGbxTextField* HyperspaceHeader;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MapWarning;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MapError;
    
    UPROPERTY(Transient)
    UGbxTextField* MapErrorText;
    
    UPROPERTY(Transient)
    UGFxTutorialWidget* TutorialWidget;
    
    UPROPERTY(Transient)
    TArray<FZoneMapPOIEntry> FastTravelStationListData;
    
    UPROPERTY(Transient)
    TArray<UZoneMapData*> LevelListData;
    
    UPROPERTY(Transient)
    TArray<UPlanetData*> PlanetListData;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UZoneMapData> PlayerLevel;
    
    UPROPERTY(Transient)
    UOakUIChallengeDataProvider* ChallengeProvider;
    
    UPROPERTY(Transient)
    TMap<FUniqueNetIdRepl, FZoneMapIconInfo> FriendIcons;
    
    UPROPERTY(Transient)
    UOakChallenge* ChallengeToFocusAfterLoad;
    
    UPROPERTY(Transient)
    FZoneMapIconInfo TargetIconInfo;
    
    UPROPERTY(Transient)
    TArray<FZoneMapIconInfo> MapIconInfos;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<AZoneMapDisplayActor> FocusedPOIActor;
    
    UPROPERTY()
    UPlanetData* PendingPOIPlanet;
    
public:
    UGFxMapMenu();
private:
    UFUNCTION()
    void OnTutorialComplete() const;
    
    UFUNCTION()
    void OnTutorialAdvanced() const;
    
    UFUNCTION()
    void OnPlanetSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnPlanetClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnNavBarItemSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnMinimapIconComponentEndTracking(UOakMinimapIconComponent* MinimapIconComponent) const;
    
    UFUNCTION()
    void OnMinimapIconComponentBeginTracking(UOakMinimapIconComponent* MinimapIconComponent) const;
    
    UFUNCTION()
    void OnMapIconUnhovered(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnMapIconClicked(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnLevelSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnLevelClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFriendSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnFriendClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFastTravelStationSelectedExplicitly(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnFastTravelStationSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnFastTravelStationClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFastTravelAvailabilityChanged(bool bAvailable) const;
    
    UFUNCTION()
    void OnChallengeSelected(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnChallengeListItemUpdated(const FOakUIChallengeListData& ListData) const;
    
    UFUNCTION()
    void OnChallengeClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void InitForHyperspaceMenu() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

