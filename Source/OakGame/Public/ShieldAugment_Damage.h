#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ForceSelection.h"
#include "ShieldAugment_Triggerable.h"
#include "AttributeInitializationData.h"
#include "SingularityInitializationInfo.h"
#include "ShieldAugment_Damage.generated.h"

class UGbxDamageType;
class UOakDamageData;
class UExplosionData;
class UParticleSystem;
class UDamageSource;
class UWwiseEvent;

UCLASS(EditInlineNew)
class UShieldAugment_Damage : public UShieldAugment_Triggerable {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UOakDamageData> DamageData;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* ScreenParticles;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData DamageOverride;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxDamageType> DamageTypeOverride;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UDamageSource> DamageSourceOverride;
    
    UPROPERTY(EditDefaultsOnly)
    UExplosionData* ExplosionDataOverride;
    
    UPROPERTY(EditDefaultsOnly)
    FForceSelection ImpactDataOverride;
    
    UPROPERTY(EditDefaultsOnly)
    float DamageDelay;
    
    UPROPERTY(EditDefaultsOnly)
    bool bCausePersistentDamageOnEquip;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* PreDelayAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    UWwiseEvent* DamageAudioEvent;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseSingularity;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData SingularityRadius;
    
    UPROPERTY(EditDefaultsOnly)
    float BarrierSingularityOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FSingularityInitializationInfo SingularityInfo;
    
public:
    UShieldAugment_Damage();
};

