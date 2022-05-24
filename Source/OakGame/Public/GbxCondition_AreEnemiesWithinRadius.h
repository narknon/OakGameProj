#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "AttributeInitializationData.h"
#include "GbxCondition_AreEnemiesWithinRadius.generated.h"

UCLASS(CollapseCategories, Const, EditInlineNew)
class OAKGAME_API UGbxCondition_AreEnemiesWithinRadius : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData RadiusInit;
    
public:
    UGbxCondition_AreEnemiesWithinRadius();
};

