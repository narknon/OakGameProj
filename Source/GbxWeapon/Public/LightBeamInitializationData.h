#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "LightBeamAttachment.h"
#include "ForceSelection.h"
#include "EWeaponShotModifierType.h"
#include "CriticalHitDamageOverrides.h"
#include "DamageGoreModifiers.h"
#include "LightBeamInitializationData.generated.h"

class UCurveFloat;
class ULightBeamData;
class APawn;
class AActor;
class UGbxDamageType;
class UDamageSource;
class UImpactData;
class ULightBeam;

USTRUCT(BlueprintType)
struct GBXWEAPON_API FLightBeamInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<ULightBeamData> DataBlueprint;
    
    UPROPERTY(BlueprintReadWrite)
    FLightBeamAttachment Source;
    
    UPROPERTY(BlueprintReadWrite)
    FLightBeamAttachment Target;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite)
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* DamageCauser;
    
    UPROPERTY(BlueprintReadWrite)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite)
    float DamageIntervalOverride;
    
    UPROPERTY(BlueprintReadWrite)
    UCurveFloat* DamageRampCurve;
    
    UPROPERTY(BlueprintReadWrite)
    float DamageRampScale;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY(BlueprintReadWrite)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite)
    FForceSelection ImpactForce;
    
    UPROPERTY(BlueprintReadWrite)
    UImpactData* ImpactDataOverride;
    
    UPROPERTY(BlueprintReadWrite)
    FName NameId;
    
    UPROPERTY(BlueprintReadWrite)
    float Spread;
    
    UPROPERTY(BlueprintReadWrite)
    float LifetimeOverride;
    
    UPROPERTY(BlueprintReadWrite)
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite)
    float ModifierValue;
    
    UPROPERTY(BlueprintReadWrite)
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    UPROPERTY(BlueprintReadWrite)
    FDamageGoreModifiers GoreModifiers;
    
    UPROPERTY(Transient)
    ULightBeam* ParentBeam;
    
    FLightBeamInitializationData();
};

