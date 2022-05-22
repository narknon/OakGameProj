#pragma once
#include "CoreMinimal.h"
#include "AttributeEffectMutatorData.h"
#include "AttributeInitializationData.h"
#include "AttributeEffectMutatorData_AlliesInRange.generated.h"

UCLASS(EditInlineNew)
class UAttributeEffectMutatorData_AlliesInRange : public UAttributeEffectMutatorData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    bool bInfiniteRange;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData RangeData;
    
public:
    UAttributeEffectMutatorData_AlliesInRange();
};

