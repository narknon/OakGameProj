#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxTrophyCaseMenuTrophyPanel.generated.h"

class UGbxGFxSlider;
class UGbxTextField;
class UGbxGFxProgressBar;
class UGbxGFxGridScrollingList;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class UGFxTrophyCaseMenuTrophyPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* TrophyPanelClip;
    
    UPROPERTY(Transient)
    UGbxTextField* EnemyNameTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* TrophyColorTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* NextRankTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* KillsLabelTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* KillsCountTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxGridScrollingList* PanelNavClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PanelNavHintClip;
    
    UPROPERTY(Transient)
    UGbxTextField* EnemyDescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* EnemyDescriptionTextMaskClip;
    
    UPROPERTY(Transient)
    UGbxGFxSlider* EnemyDescriptionScrollbarClip;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* ProgressBarClip;
    
    UPROPERTY(Transient)
    bool bShowing;
    
public:
    UGFxTrophyCaseMenuTrophyPanel();
};

