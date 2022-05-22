#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenTree.h"
#include "GFxOperativeSkillScreenTree.generated.h"

class UGbxTextField;
class UGFxSkillScreenLoadoutSlot;

UCLASS()
class OAKGAME_API UGFxOperativeSkillScreenTree : public UGFxSkillScreenTree {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* SkillLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* ModsLabel;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* TopSkillSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* TopSkillMods[2];
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* BottomSkillSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* BottomSkillMods[2];
    
    UPROPERTY(EditAnywhere)
    FText DeviceSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText AugmentSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText GrenadeName;
    
    UPROPERTY(EditAnywhere)
    FText GrenadeDescription;
    
public:
    UGFxOperativeSkillScreenTree();
};

