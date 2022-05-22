#pragma once
#include "CoreMinimal.h"
#include "GbxCondition.h"
#include "GbxCondition_OakStatusEffects_IsPresenting.generated.h"

class UOakElementalEffectData;
class UOakStatusEffectPresentationData;

UCLASS(CollapseCategories, Const, EditInlineNew)
class UGbxCondition_OakStatusEffects_IsPresenting : public UGbxCondition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UOakElementalEffectData* ElementalEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UOakStatusEffectPresentationData* PresentationData;
    
public:
    UGbxCondition_OakStatusEffects_IsPresenting();
};

