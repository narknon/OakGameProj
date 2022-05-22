#pragma once
#include "CoreMinimal.h"
#include "GrenadeBehavior_PayloadBlueprint.h"
#include "GrenadeBehavior_PayloadNuke.generated.h"

class UExplosionData;
class UGbxAttributeData;

UCLASS(EditInlineNew)
class OAKGAME_API UGrenadeBehavior_PayloadNuke : public UGrenadeBehavior_PayloadBlueprint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    float DamageScaleIncreasePerGrenade;
    
    UPROPERTY(EditDefaultsOnly)
    float RadiusScaleIncreasePerGrenade;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxAttributeData* GrenadeAmmoAttribute;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionData* NukeExplosionData;
    
public:
    UGrenadeBehavior_PayloadNuke();
};

