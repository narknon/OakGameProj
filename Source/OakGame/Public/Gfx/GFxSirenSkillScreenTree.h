#pragma once
#include "CoreMinimal.h"
#include "GFxSkillScreenTree.h"
#include "GFxSirenSkillScreenTree.generated.h"

class UGbxTextField;
class UGFxSkillScreenLoadoutSlot;

UCLASS()
class OAKGAME_API UGFxSirenSkillScreenTree : public UGFxSkillScreenTree {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UGbxTextField* ComboLabel;
    
    UPROPERTY(Transient)
    UGbxTextField* PassivesText;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* SkillSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* ModSlot;
    
    UPROPERTY(Transient)
    UGFxSkillScreenLoadoutSlot* ElementalEffectSlot;
    
    UPROPERTY(EditAnywhere)
    FText SkillSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText AugmentSlotDescription;
    
    UPROPERTY(EditAnywhere)
    FText ShockDescription;
    
    UPROPERTY(EditAnywhere)
    FText ShockName;
    
    UPROPERTY(EditAnywhere)
    FString ShockFrameName;
    
public:
    UGFxSirenSkillScreenTree();
};

