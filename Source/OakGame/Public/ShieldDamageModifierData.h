#pragma once
#include "CoreMinimal.h"
#include "ShieldDamageModifierData.generated.h"

class UConditionalDamageModifier;
class UShieldAugment_DamageModifier;
class AOakCharacter;

USTRUCT(BlueprintType)
struct FShieldDamageModifierData {
    GENERATED_BODY()
public:
    UPROPERTY()
    UShieldAugment_DamageModifier* Augment;
    
    UPROPERTY()
    UConditionalDamageModifier* ModifierInstance;
    
    UPROPERTY()
    TArray<AOakCharacter*> RegisteredCharacters;
    
    OAKGAME_API FShieldDamageModifierData();
};

