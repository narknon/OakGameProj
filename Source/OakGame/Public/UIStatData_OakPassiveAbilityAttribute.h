#pragma once
#include "CoreMinimal.h"
#include "UIStatData_Numeric.h"
#include "UIStatData_OakPassiveAbilityAttribute.generated.h"

class UStatusEffectData;
class UGbxAttributeData;

UCLASS(EditInlineNew)
class UUIStatData_OakPassiveAbilityAttribute : public UUIStatData_Numeric {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    UStatusEffectData* StatusEffectData;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* Attribute;
    
public:
    UUIStatData_OakPassiveAbilityAttribute();
};

