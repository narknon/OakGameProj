#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityResourceSpec.h"
#include "OakAbilityResourceSpec_WeaponShotModifier.generated.h"

class UOakDamageCauserComponent;
class UObject;
class UWeaponShotModifier;

USTRUCT(BlueprintType)
struct FOakAbilityResourceSpec_WeaponShotModifier : public FGbxAbilityResourceSpec {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UOakDamageCauserComponent* DamageCauserComponent;
    
    UPROPERTY(BlueprintReadWrite)
    UWeaponShotModifier* ShotModifier;
    
    UPROPERTY(BlueprintReadWrite)
    UObject* ContextOverride;
    
    OAKGAME_API FOakAbilityResourceSpec_WeaponShotModifier();
};

