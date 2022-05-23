#pragma once
#include "CoreMinimal.h"
#include "EGbxFocusableWidgetState.h"
#include "GbxGFxListCell.h"
#include "EGFxSkillScreenLoadoutChoiceEquipState.h"
#include "GFxSkillScreenLoadoutChoiceItem.generated.h"

class UGbxGFxObject;
class UOakPlayerAbilityTreeItemData;
class UGbxGFxButton;

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenLoadoutChoiceItem : public UGbxGFxListCell {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* IconGray;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconColored;
    
    UPROPERTY(Transient)
    UGbxGFxObject* IconSelected;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackgroundGray;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackgroundColored;
    
    UPROPERTY(Transient)
    UGbxGFxObject* BackgroundSelected;
    
    UPROPERTY(Transient)
    FText ChoiceSelectionName;
    
    UPROPERTY(Transient)
    FText ChoiceSelectedName;
    
    UPROPERTY(Transient)
    FText ChoiceDescription;
    
    UPROPERTY(Transient)
    EGFxSkillScreenLoadoutChoiceEquipState EquipState;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeItemData* ItemData;
    
public:
    UGFxSkillScreenLoadoutChoiceItem();
private:
    UFUNCTION()
    FString GetButtonState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState State);
    
};

