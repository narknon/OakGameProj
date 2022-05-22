#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentData.h"
#include "EOperativeBarrierModType.h"
#include "OakActionAbilityAugmentData_Barrier.generated.h"

UCLASS()
class UOakActionAbilityAugmentData_Barrier : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EOperativeBarrierModType ModType;
    
public:
    UOakActionAbilityAugmentData_Barrier();
};

