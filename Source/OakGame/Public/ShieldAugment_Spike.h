#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ShieldAugment.h"
#include "AttributeInitializationData.h"
#include "ShieldTriggeredProjectileReflectEffect.h"
#include "ShieldTriggeredElementalEffect.h"
#include "ShieldAugment_Spike.generated.h"

class UDamageSource;
class UOakDamageData;
class UEffectCollectionData;

UCLASS(EditInlineNew)
class UShieldAugment_Spike : public UShieldAugment {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bUseCooldown;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData Cooldown;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> TriggeringDamageSource;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakDamageData> DamageData;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTriggerElementalEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FShieldTriggeredElementalEffect ElementalEffect;
    
    UPROPERTY(EditDefaultsOnly)
    bool bTriggerProjectile;
    
    UPROPERTY(EditDefaultsOnly)
    FShieldTriggeredProjectileReflectEffect ProjectileEffect;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEffectCollectionData> FirstPersonSpikeEffectCollection;
    
    UPROPERTY(EditDefaultsOnly)
    FName SpikeParticleAttachPointName;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEffectCollectionData> ThirdPersonSpikeEffectCollection;
    
public:
    UShieldAugment_Spike();
};

