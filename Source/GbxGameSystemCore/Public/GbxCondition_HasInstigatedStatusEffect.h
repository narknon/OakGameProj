#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_HasInstigatedStatusEffect.generated.h"

class UStatusEffectData;

UCLASS(CollapseCategories, Const, EditInlineNew)
class GBXGAMESYSTEMCORE_API UGbxCondition_HasInstigatedStatusEffect : public UGbxCondition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
public:
    UGbxCondition_HasInstigatedStatusEffect();
};

