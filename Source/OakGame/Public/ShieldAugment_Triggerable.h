#pragma once
#include "CoreMinimal.h"
#include "ShieldAugment.h"
#include "GameResourcePoolReference.h"
#include "EAugmentTriggerOn.h"
#include "AugmentData.h"
#include "ShieldAugment_Triggerable.generated.h"

class AShield;

UCLASS(Abstract, EditInlineNew)
class UShieldAugment_Triggerable : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    EAugmentTriggerOn TriggerableOn;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUntriggerable;
    
    UPROPERTY(EditDefaultsOnly)
    EAugmentTriggerOn UntriggerableOn;
    
    UPROPERTY(EditDefaultsOnly)
    bool bResetOnOpposingTrigger;
    
public:
    UShieldAugment_Triggerable();
    UFUNCTION(BlueprintImplementableEvent)
    void K2_UntriggerEffect(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_TriggerEffect(AShield* Shield, FGameResourcePoolReference ResourcePool, UPARAM(Ref) FAugmentData& StackData) const;
    
};

