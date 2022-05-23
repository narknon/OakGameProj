#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxGFxHUDWidget.h"
#include "GFxSkillDurationBars.generated.h"

class UGbxGFxObject;
class UGFxSkillBar;
class UOakActionAbilityAugmentSlotData;
class UOakActionAbility;
class UOakPlayerAbilitySlotData;

UCLASS()
class OAKGAME_API UGFxSkillDurationBars : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxObject* SkillBarWrapper;
    
    UPROPERTY(Transient)
    UGFxSkillBar* LeftSkillBar;
    
    UPROPERTY(Transient)
    UGFxSkillBar* RightSkillBar;
    
public:
    UGFxSkillDurationBars();
private:
    UFUNCTION()
    void OnActionSkillCoolingDown(UOakActionAbility* InActionAbility) const;
    
    UFUNCTION()
    void OnActionAbilityAugmentChanged(TSubclassOf<UOakActionAbility> ActionAbilityClass, UOakActionAbilityAugmentSlotData* SlotData) const;
    
    UFUNCTION()
    void OnAbilitySlotChanged(UOakPlayerAbilitySlotData* SlotData) const;
    
};

