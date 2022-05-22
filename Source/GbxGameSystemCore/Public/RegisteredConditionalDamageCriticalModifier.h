#pragma once
#include "CoreMinimal.h"
#include "RegisteredConditionalDamageCriticalModifier.generated.h"

class UConditionalDamageCriticalModifier;
class UObject;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FRegisteredConditionalDamageCriticalModifier {
    GENERATED_BODY()
public:
    UPROPERTY()
    UConditionalDamageCriticalModifier* Modifier;
    
    UPROPERTY()
    UObject* ModifierValueContextOverride;
    
    FRegisteredConditionalDamageCriticalModifier();
};

