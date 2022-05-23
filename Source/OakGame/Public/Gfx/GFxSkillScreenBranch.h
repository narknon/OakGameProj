#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "GbxMenuInputEvent.h"
#include "GFxSkillScreenBranch.generated.h"

class UGbxGFxObject;
class UGFxSkillScreenRowList;
class UOakPlayerAbilityTree;
class UGbxGFxProgressBar;
class UOakPlayerAbilityTreeBranchData;
class UGFxSkillScreenRow;
class UGFxSkillScreenItem;
class UOakPlayerAbilityTreeTierData;

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenBranch : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* LayoutBranch;
    
    UPROPERTY(Transient)
    UGFxSkillScreenRowList* SkillRowList;
    
    UPROPERTY(Export, Transient)
    UOakPlayerAbilityTree* PlayerAbilityTree;
    
    UPROPERTY(Transient)
    UOakPlayerAbilityTreeBranchData* BranchData;
    
    UPROPERTY(Transient)
    UGbxGFxProgressBar* BackgroundFill;
    
    UPROPERTY(Transient)
    UGFxSkillScreenRow* PreviousRow;
    
public:
    UGFxSkillScreenBranch();
private:
    UFUNCTION()
    void OnTreeItemUnfocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnTreeItemPressed(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnTreeItemFocused(UGbxGFxButton* BUTTON, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnItemUsableStateChanged(UGFxSkillScreenItem* UpdatedItem);
    
    UFUNCTION()
    void OnItemUnlockedAudioRequest();
    
    UFUNCTION()
    void OnItemSlotRequest(UGFxSkillScreenItem* ItemToSlot, int32 SlotIndex);
    
    UFUNCTION()
    void OnItemIncreasedAudioRequest(int32 AudioIndex);
    
    UFUNCTION()
    void OnAbilityTierChanged(UOakPlayerAbilityTreeTierData* TierData);
    
    UFUNCTION()
    void OnAbilityPointsChanged(int32 RemainingAbilityPoints);
    
};

