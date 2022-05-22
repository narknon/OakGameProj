#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeInitializationData.h"
#include "ShieldTriggeredProjectileReflectEffect.generated.h"

class ULightProjectileData;

USTRUCT(BlueprintType)
struct FShieldTriggeredProjectileReflectEffect {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bShieldMustBeActiveToTrigger;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<ULightProjectileData> LightProjectile;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Damage;
    
    OAKGAME_API FShieldTriggeredProjectileReflectEffect();
};

