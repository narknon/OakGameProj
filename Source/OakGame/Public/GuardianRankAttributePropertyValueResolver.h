#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "GuardianRankAttributePropertyValueResolver.generated.h"

class UGuardianRankRewardData;

UCLASS(CollapseCategories, EditInlineNew)
class UGuardianRankAttributePropertyValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    UGuardianRankRewardData* RewardData;
    
public:
    UGuardianRankAttributePropertyValueResolver();
};

