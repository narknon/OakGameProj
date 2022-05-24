#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxMenu.h"
#include "EMissionDeliveryMenuDisplayState.h"
#include "Engine/EngineTypes.h"
#include "GbxMenuInputEvent.h"
#include "GFxMissionDeliveryMenu.generated.h"

class UGbxGFxButton;
class UGbxGFxSlider;
class UGbxTextField;
class AActor;
class UGbxGFxObject;
class UGbxGFxHintWidget;
class UPlayerBalanceStateComponent;
class UMission;
class AMissionTracker;

UCLASS()
class OAKGAME_API UGFxMissionDeliveryMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_FourParams(FMissionDeliveryEvent, bool, bMissionAccepted, bool, bEmergencyExit, int32, MissionIndex, AActor*, MissionGiver);
    
private:
    UPROPERTY(Transient)
    UGbxGFxButton* AcceptButton;
    
    UPROPERTY(Transient)
    UGbxGFxButton* DeclineButton;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MissionDescriptionContainer;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionDescriptionText;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* MissionDescriptionScrollBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MissionDescriptionGridArea;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionTitleText;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionLevelText;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionLocationText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MultiMissionNavBar;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MultiMissionPreviousHint;
    
    UPROPERTY(Transient)
    UGbxGFxButton* MultiMissionLeftArrow;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* MultiMissionNextHint;
    
    UPROPERTY(Transient)
    UGbxGFxButton* MultiMissionRightArrow;
    
    UPROPERTY(Transient)
    UGbxGFxObject* MultiMissionMissionPipsWrapper;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxButton*> MultiMissionMissionPips;
    
    UPROPERTY(Transient)
    UGbxTextField* DifficultyText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlacardBG;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlacardTop;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlacardElementsBG;
    
    UPROPERTY(Transient)
    UGbxGFxObject* PlacardTopText;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ModalDetails;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendAmountText;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendsOnMissionText;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionCycleGlyph;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UPlayerBalanceStateComponent> PlayerBalanceState;
    
    UPROPERTY(Transient)
    TSubclassOf<UMission> DisplayedMissionData;
    
    UPROPERTY(Transient)
    AActor* DisplayedMissionGiver;
    
    UPROPERTY(Transient)
    EMissionDeliveryMenuDisplayState CurrentDisplayState;
    
    UPROPERTY(Transient)
    FText CachedMissionDescription;
    
    UPROPERTY(Transient)
    FText CachedMissionTitle;
    
    UPROPERTY(Transient)
    FText CachedMissionLocation;
    
    UPROPERTY(Transient)
    int32 CachedMissionLevel;
    
    UPROPERTY(Transient)
    FText CachedMissionLevelText;
    
    UPROPERTY(Transient)
    AMissionTracker* CurrentMissionTracker;
    
    UPROPERTY()
    FTimerHandle TimerHandle_PopulateFriendNames;
    
    UPROPERTY(EditAnywhere)
    FText WaitingForNameString;
    
    UPROPERTY(EditAnywhere)
    FName ProjectionFXWidgetName;
    
public:
    UGFxMissionDeliveryMenu();
private:
    UFUNCTION()
    void OnRejectMission(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
    UFUNCTION()
    void OnAcceptMission(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo) const;
    
};

