#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenTree.h"
#include "GFxGunnerSkillScreenTree.generated.h"

class UGbxTextField;
class UGFxSkillScreenLoadoutSlot;

UCLASS()
class OAKGAME_API UGFxGunnerSkillScreenTree : public UGFxSkillScreenTree {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* HardPointsLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* ModsLabel;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* LeftHardPoint;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* LeftHardPointMod;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* RightHardPoint;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* RightHardPointMod;
    
    UPROPERTY(EditAnywhere)
    FText HardpointSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText AugmentSlotDescription;
    
public:
    UGFxGunnerSkillScreenTree();
};

