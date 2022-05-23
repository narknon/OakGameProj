#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GFxMissionLogMenuItemCell.generated.h"

class UGbxGFxHintWidget;
class UGbxTextField;
class UGbxGFxObject;

UCLASS(NonTransient)
class OAKGAME_API UGFxMissionLogMenuItemCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* MissionName;
    
    UPROPERTY(Transient)
    UGbxTextField* FriendsOnMissionTextField;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* HintClip;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ActiveMissionIconClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ProgressTextClip;
    
public:
    UGFxMissionLogMenuItemCell();
};

