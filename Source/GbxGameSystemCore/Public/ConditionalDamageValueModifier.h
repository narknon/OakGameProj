#pragma once
#include "CoreMinimal.h"
#include "ConditionalDamageModifier.h"
#include "EConditionalDamageModifierType.h"
#include "AttributeInitializationData.h"
#include "Curves/CurveFloat.h"
#include "ConditionalDamageDamageConditionalValue.h"
#include "ConditionalDamageValueModifier.generated.h"

UCLASS(EditInlineNew)
class GBXGAMESYSTEMCORE_API UConditionalDamageValueModifier : public UConditionalDamageModifier {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EConditionalDamageModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageValue;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalDamageDamageConditionalValue> ConditionalDamageValues;
    
    UPROPERTY(EditAnywhere)
    bool bModifyValueBasedOnDistance;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve ModifyValueBasedOnDistanceCurve;
    
    UPROPERTY(EditAnywhere)
    bool bDisallowFatalDamage;
    
    UConditionalDamageValueModifier();
};

