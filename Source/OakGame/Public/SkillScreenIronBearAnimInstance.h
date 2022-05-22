#pragma once
#include "CoreMinimal.h"
#include "GbxAnimInstance.h"
#include "SkillScreenIronBearAnimInstance.generated.h"

class AStandInAuxiliaryActor_IronBear;

UCLASS(NonTransient)
class USkillScreenIronBearAnimInstance : public UGbxAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    AStandInAuxiliaryActor_IronBear* IronBear;
    
    UPROPERTY(BlueprintReadOnly)
    bool bIsLocked;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Slot_HPL_Active;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    bool Slot_HPR_Active;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float R_Fist_Weight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float L_Fist_Weight;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float L_Fist_Weight_Inv;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float R_Fist_Weight_Inv;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float FistTorsoWeight;
    
public:
    USkillScreenIronBearAnimInstance();
};

