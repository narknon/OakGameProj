#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasStatusEffect.generated.h"

class UStatusEffectData;

UCLASS(CollapseCategories, EditInlineNew)
class UGbxCondition_HasStatusEffect : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditAnywhere)
    int32 InstanceCount;
    
    UPROPERTY(EditAnywhere)
    bool bQueryOwnerOnly;
    
public:
    UGbxCondition_HasStatusEffect();
};

