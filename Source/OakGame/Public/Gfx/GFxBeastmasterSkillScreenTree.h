#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenTree.h"
#include "GFxBeastmasterSkillScreenTree.generated.h"

class UGbxTextField;
class UGFxSkillScreenLoadoutSlot;

UCLASS()
class OAKGAME_API UGFxBeastmasterSkillScreenTree : public UGFxSkillScreenTree {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* PetLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* PetAbilitySlotsLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* PetUltimateModLabel;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* PetSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* PetUltimateMod;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* PetAbilitySlots[2];
    
    UPROPERTY(EditAnywhere)
    FText PetSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText PetUltimateSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText PetAugmentSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText PetAbilitySlotDescription;
    
public:
    UGFxBeastmasterSkillScreenTree();
};

