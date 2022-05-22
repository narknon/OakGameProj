#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAnimInstance.h"
#include "IronBearAnimInstance_FirstPerson.generated.h"

UCLASS(NonTransient)
class UIronBearAnimInstance_FirstPerson : public UOakPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
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
    UIronBearAnimInstance_FirstPerson();
};

