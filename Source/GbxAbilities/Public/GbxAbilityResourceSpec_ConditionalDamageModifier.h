#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.h"
#include "GbxAbilityResourceSpec_ConditionalDamageModifier.generated.h"

class UConditionalDamageModifier;
class UDamageBaseComponent;
class UObject;

USTRUCT(BlueprintType)
struct FGbxAbilityResourceSpec_ConditionalDamageModifier : public FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UDamageBaseComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadWrite)
    UConditionalDamageModifier* DamageModifier;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* ContextOverride;
    
    GBXABILITIES_API FGbxAbilityResourceSpec_ConditionalDamageModifier();
};

