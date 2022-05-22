#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "ShieldTriggeredElementalEffect.generated.h"

class UOakDamageType;

USTRUCT(BlueprintType)
struct FShieldTriggeredElementalEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShieldMustBeActiveToTrigger;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamagePerSecond;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData ResourceEffectValue;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakDamageType> DamageType;
    
    OAKGAME_API FShieldTriggeredElementalEffect();
};

