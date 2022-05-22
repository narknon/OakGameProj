#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAnimInstance.h"
#include "IronBearAnimInstance_ThirdPerson.generated.h"

class UOakActionAbilityAugmentData;

UCLASS(NonTransient)
class UIronBearAnimInstance_ThirdPerson : public UOakPlayerAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient)
    float R_Fist_Weight;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    float L_Fist_Weight;
    
public:
    UIronBearAnimInstance_ThirdPerson();
    UFUNCTION(BlueprintCallable)
    bool IsAugmentSlotted(UOakActionAbilityAugmentData* InAugment);
    
};

