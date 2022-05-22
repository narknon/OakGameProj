#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ConditionalDamageDamageTypeConditional.generated.h"

class UGbxCondition;
class UGbxDamageType;

USTRUCT(BlueprintType)
struct FConditionalDamageDamageTypeConditional {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    GBXGAMESYSTEMCORE_API FConditionalDamageDamageTypeConditional();
};

