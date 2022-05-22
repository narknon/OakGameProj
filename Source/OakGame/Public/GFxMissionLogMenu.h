#pragma once
#include "CoreMinimal.h"
#include "GFxStatusMenuSubmenu.h"
#include "GbxGFxMediaPlayerConfig.h"
#include "UObject/NoExportTypes.h"
#include "MissionObserverInterface.h"
#include "MissionLogEchoDeviceSettings.h"
#include "EGFxMissionLogNavType.h"
#include "UObject/NoExportTypes.h"
#include "GFxMissionLogMissionItem.h"
#include "EGFxMissionLogFilterType.h"
#include "GbxMenuInputEvent.h"
#include "EVoiceOfGodSpeaker.h"
#include "GFxMissionLogMenu.generated.h"

class AOakPlayerController;
class UGbxGFxMediaPlayer;
class UGbxTextField;
class UGbxGFxObject;
class UGbxGFxGridScrollingList;
class UGbxGFxHintWidget;
class UGFxEchologWidgetBase;
class UGFxMissionLogDescriptionBox;
class UGbxMenuData;
class AMissionTracker;
class UOakPlayerMissionComponent;
class UGbxGFxListCell;
class UGbxGFxDialogBox;
class UCharacterEchoData;
class UPerformanceEchoData;

UCLASS()
class OAKGAME_API UGFxMissionLogMenu : public UGFxStatusMenuSubmenu, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUseDebug;
    
    UPROPERTY(EditAnywhere)
    FString HeaderListItem;
    
    UPROPERTY(EditAnywhere)
    FString ActiveMissionListItem;
    
    UPROPERTY(EditAnywhere)
    FString CompletedMissionListItem;
    
    UPROPERTY(EditAnywhere)
    FColor CurrentObjectiveHeaderColor;
    
    UPROPERTY(EditAnywhere)
    FColor CurrentObjectiveEntryColor;
    
    UPROPERTY(EditAnywhere)
    FColor OptionalObjectiveHeaderColor;
    
    UPROPERTY(EditAnywhere)
    FColor OptionalObjectiveEntryColor;
    
    UPROPERTY(EditAnywhere)
    FVector2D LogListItemSpacing;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_MissionVOPlayed;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_EchoLogPlayed;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_EridianLogPlayed;
    
    UPROPERTY(EditAnywhere)
    FName EchoDeviceScreen_TyphonLogPlayed;
    
    UPROPERTY(EditAnywhere)
    FString EchoNetSubmenuName;
    
    UPROPERTY(EditAnywhere)
    FText EridianCategoryName;
    
    UPROPERTY(EditAnywhere)
    FText TyphonCategoryName;
    
    UPROPERTY(EditAnywhere)
    FText EchoCategoryName;
    
    UPROPERTY(EditAnywhere)
    FText MissionCategoryName;
    
    UPROPERTY(EditAnywhere)
    FText SocialWidgetViewRoster;
    
    UPROPERTY(EditAnywhere)
    FText EmptyLogString;
    
    UPROPERTY(EditAnywhere)
    FText FilterString;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxMediaPlayerConfig MediaPlayerConfig;
    
    UPROPERTY(EditAnywhere)
    TMap<EGFxMissionLogNavType, FMissionLogEchoDeviceSettings> EchoDeviceSettings;
    
    UPROPERTY(Transient)
    AOakPlayerController* CachedPlayerController;
    
    UPROPERTY(Transient)
    bool bEchoLogWasPlaying;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* EmptyTextField;
    
    UPROPERTY(Transient)
    FText FilterName;
    
    UPROPERTY(Transient)
    UGbxGFxMediaPlayer* MediaPlayer;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ContentClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* NavBarList;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBarHint;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBarHintPrev;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* NavBarHintNext;
    
    UPROPERTY(Transient)
    UGbxTextField* FilterTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* FilterHintClip;
    
    UPROPERTY(Transient)
    UGFxEchologWidgetBase* AudioLogClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CategoryTextField;
    
    UPROPERTY(Transient)
    UGFxMissionLogDescriptionBox* MissionDescriptionBoxClip;
    
    UPROPERTY(Transient)
    UGFxMissionLogDescriptionBox* LogDescriptionBoxClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* MissionListBox;
    
    UPROPERTY(Transient)
    TArray<FGFxMissionLogMissionItem> MissionBoxItems;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxMenuData* PlayerDetailsMenuData;
    
    UPROPERTY(Transient)
    EGFxMissionLogNavType CurrentNav;
    
    UPROPERTY(Transient)
    EGFxMissionLogFilterType CurrentFilterType;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AMissionTracker> MyMissionTracker;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UOakPlayerMissionComponent> PlayerMissionComponent;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SocialWidget;
    
    UPROPERTY(Transient)
    UGbxTextField* SocialWidgetHeader;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* SocialWidgetHint;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* SocialWidgetScrollingList;
    
public:
    UGFxMissionLogMenu();
    UFUNCTION()
    void UpdatePauseHint(bool bShouldAddToHintBar) const;
    
private:
    UFUNCTION()
    void ShowFriendsOnMissionDialog() const;
    
    UFUNCTION()
    void SetLookingAtMissionInfo(const FGFxMissionLogMissionItem& MissionInfo) const;
    
    UFUNCTION()
    void OnNavCellSelectionChanged(UGbxGFxListCell* NewSelectedItem) const;
    
    UFUNCTION()
    void OnMissionSelectionChanged(UGbxGFxListCell* ListItem) const;
    
    UFUNCTION()
    void OnMissionListItemClicked(UGbxGFxListCell* ListItem, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnFriendSelectedToJoin(UGbxGFxDialogBox* SourceDialog, FName ChoiceNameId, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho) const;
    
    UFUNCTION()
    void OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

