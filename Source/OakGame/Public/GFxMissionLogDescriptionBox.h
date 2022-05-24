#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxMissionLogDescriptionBox.generated.h"

class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxHintWidget;
class UGbxGFxGridScrollingList;
class AMissionTracker;
class UGFxMissionLogMenu;

UCLASS(NonTransient)
class OAKGAME_API UGFxMissionLogDescriptionBox : public UGbxGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxObject* ActiveMissionIconClip;
    
private:
    UPROPERTY(Transient)
    UGbxTextField* InfoPanelLabelClip;
    
    UPROPERTY(Transient)
    UGbxTextField* InfoPanelSecondaryLabelClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* ObjectiveList;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* DescriptionSlider;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ReplayAudioHint;
    
    UPROPERTY(Transient)
    UGbxTextField* MissionTimerClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionScrollingBoxClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* DescriptionScrollingBoxScrollbarClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* DescriptionScrollingBoxMaskClip;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<AMissionTracker> MissionTracker;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGFxMissionLogMenu> OwnerMissionLog;
    
    UPROPERTY(Transient)
    bool bIsVisible;
    
public:
    UPROPERTY()
    FText PromptClipReplay;
    
    UGFxMissionLogDescriptionBox();
};

