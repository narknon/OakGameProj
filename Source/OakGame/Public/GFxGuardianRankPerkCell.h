#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCell.h"
#include "GuardianRankPerkEntry.h"
#include "EGbxFocusableWidgetState.h"
#include "GFxGuardianRankPerkCell.generated.h"

class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxGuardianRankPerkCell : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FGuardianRankPerkEntry PerkInfo;
    
    UPROPERTY(Transient)
    FString DesiredColorFrame;
    
public:
    UGFxGuardianRankPerkCell();
    UFUNCTION()
    FString GetButtonState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState State);
    
};

