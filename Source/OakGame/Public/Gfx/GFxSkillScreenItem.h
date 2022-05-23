#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "EGbxFocusableWidgetState.h"
#include "UObject/NoExportTypes.h"
#include "GFxSkillScreenItem.generated.h"

class UOakPlayerAbilityTreeItemData;
class UOakPlayerAbilityTree;
class UGFxSkillScreenRowList;

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenItem : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeItemData* ItemData;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* AbilityTree;
    
    UPROPERTY(Transient)
    UGFxSkillScreenRowList* OwnerRowList;
    
    UPROPERTY(Transient)
    FLinearColor CurrentTextColor;
    
public:
    UGFxSkillScreenItem();
private:
    UFUNCTION()
    FString GetButtonState(UGbxGFxButton* BUTTON, EGbxFocusableWidgetState State);
    
};

