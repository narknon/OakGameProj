#pragma once
#include "CoreMinimal.h"
#include "AttributeValueResolver.h"
#include "AttributeInitializationData.h"
#include "GuardianRankModifierFormulaAttributeValueResolver.generated.h"

UCLASS(EditInlineNew)
class UGuardianRankModifierFormulaAttributeValueResolver : public UAttributeValueResolver {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ModifierGrowthRate;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ModifierRank;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData ModifierBaseValue;
    
public:
    UGuardianRankModifierFormulaAttributeValueResolver();
};

