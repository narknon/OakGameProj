#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "HitRegionHealthParams.h"
#include "ImpactResponseEffect.h"
#include "EDamageSurfaceType.h"
#include "HitRegionData.generated.h"

class UParticleSystem;
class UImpactData;
class UPhysicalMaterial;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UHitRegionData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName HitRegionName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FName> BoneNames;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanEverTakeRadiusDamage: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bCriticalHit: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowRadiusDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShouldBlockAreaDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bAllowRadiusDamageToBeConvertedToImpactDamage: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bTrackDamage: 1;
    
    UPROPERTY(EditAnywhere)
    FHitRegionHealthParams HealthParams;
    
    UPROPERTY(EditAnywhere)
    bool bUseDamageScale;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageScale;
    
    UPROPERTY(EditAnywhere)
    bool bShowDamageNumbers;
    
    UPROPERTY(EditAnywhere)
    bool bCanReflect;
    
    UPROPERTY(EditAnywhere)
    float ReflectionChance;
    
    UPROPERTY(EditAnywhere)
    bool bCanRicochet;
    
    UPROPERTY(EditAnywhere)
    float RicochetChance;
    
    UPROPERTY(EditAnywhere)
    bool bRicochetIfReflectionFails;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyReflectToAttacker;
    
    UPROPERTY(EditAnywhere)
    float ReflectionAccuracyModifier;
    
    UPROPERTY(EditAnywhere)
    float IncomingReflectedDamageScale;
    
    UPROPERTY(EditAnywhere)
    float OutgoingReflectedDamageScale;
    
    UPROPERTY(EditAnywhere)
    bool bDisableBulletMagnetism;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> BulletMagnetismOverrideBoneNames;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideImpactEffect;
    
    UPROPERTY(EditAnywhere)
    FImpactResponseEffect EffectOverride;
    
    UPROPERTY(EditAnywhere)
    bool bPlayImactEffectWithNoDamage;
    
    UPROPERTY(EditAnywhere)
    bool bNoSplatterEffect;
    
    UPROPERTY(EditAnywhere)
    UImpactData* SplatterEffect;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* CustomDamageNumberParticleSystem;
    
    UPROPERTY(EditAnywhere)
    bool bDisableHitReactions;
    
protected:
    UPROPERTY(EditAnywhere)
    UPhysicalMaterial* PhysicalMaterial;
    
    UPROPERTY(EditAnywhere)
    EDamageSurfaceType DefaultDamageSurface;
    
public:
    UHitRegionData();
};

