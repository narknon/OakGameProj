#pragma once
#include "CoreMinimal.h"
#include "OakActionAbilityAugmentData.h"
#include "EGRMLNModType.h"
#include "OakActionAbilityAugmentData_GRMLN.generated.h"

UCLASS()
class UOakActionAbilityAugmentData_GRMLN : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EGRMLNModType ModType;
    
public:
    UOakActionAbilityAugmentData_GRMLN();
};

