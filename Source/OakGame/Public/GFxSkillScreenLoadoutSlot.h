#pragma once
#include "CoreMinimal.h"
#include "GbxGFxButton.h"
#include "ESkillScreenReceiveHighlightState.h"
#include "GFxSkillScreenSkillInfo.h"
#include "GameResourcePoolReference.h"
#include "GFxSkillScreenLoadoutSlot.generated.h"

class UGFxSkillScreenLoadoutSlot;
class UGbxGFxObject;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;
class UPlayerCharacterComponentSlotData;

UCLASS(NonTransient)
class OAKGAME_API UGFxSkillScreenLoadoutSlot : public UGbxGFxButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* LockedOverlay;
    
    UPROPERTY(Transient)
    UGbxGFxObject* ReceiveHighlight;
    
    UPROPERTY(Transient)
    UGbxGFxObject* SlotIndicator;
    
    UPROPERTY(Transient)
    ESkillScreenReceiveHighlightState ReceiveHighlightState;
    
    UPROPERTY(Transient)
    UOakActionAbility* AssociatedActiveAbility;
    
public:
    UPROPERTY(Transient)
    FGFxSkillScreenSkillInfo EmptySlotInfo;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* SwapSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* IronCubSwapSlot;
    
    UPROPERTY(Transient)
    UOakActionAbilityAugmentSlotData* AugmentSlotData;
    
    UPROPERTY(Transient)
    UOakPlayerAbilitySlotData* AbilitySlotData;
    
    UPROPERTY(Transient)
    UPlayerCharacterComponentSlotData* CharacterAugmentSlotData;
    
    UGFxSkillScreenLoadoutSlot();
    UFUNCTION()
    void OnAssociatedResourcePoolUpdated(FGameResourcePoolReference& ResourcePool, float NewValue);
    
    UFUNCTION()
    void OnActionSkillCoolingDown(UOakActionAbility* InActionAbility);
    
    UFUNCTION()
    void OnActionSkillActivated(UOakActionAbility* InActionAbility);
    
};

