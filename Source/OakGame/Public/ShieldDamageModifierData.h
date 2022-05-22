#pragma once
#include "CoreMinimal.h"
#include "ShieldDamageModifierData.generated.h"

class UShieldAugment_DamageModifier;
class UConditionalDamageModifier;
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

