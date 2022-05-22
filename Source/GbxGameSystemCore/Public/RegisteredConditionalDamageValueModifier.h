#pragma once
#include "CoreMinimal.h"
#include "RegisteredConditionalDamageValueModifier.generated.h"

class UConditionalDamageValueModifier;
class UObject;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRegisteredConditionalDamageValueModifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConditionalDamageValueModifier* Modifier;
    
    UPROPERTY()
    UObject* DamageValueContextOverride;
    
    FRegisteredConditionalDamageValueModifier();
};

