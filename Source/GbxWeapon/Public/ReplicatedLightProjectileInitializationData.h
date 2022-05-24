#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/NetSerialization.h"
#include "UObject/NoExportTypes.h"
#include "EWeaponShotModifierType.h"
#include "Engine/NetSerialization.h"
#include "ReplicatedLightProjectileInitializationData.generated.h"

class ULightProjectileData;
class APawn;
class AActor;
class UImpactData;
class UGbxDamageType;
class UParticleSystem;
class UDamageSource;
class UWwiseEvent;

USTRUCT(BlueprintType)
struct FReplicatedLightProjectileInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint8 CreationID;
    
    UPROPERTY()
    TSubclassOf<ULightProjectileData> DataBlueprint;
    
    UPROPERTY()
    FVector_NetQuantize10 StartLocation;
    
    UPROPERTY()
    FVector_NetQuantize10 EndLocation;
    
    UPROPERTY()
    FRotator StartRotationOverride;
    
    UPROPERTY()
    APawn* Instigator;
    
    UPROPERTY()
    AActor* Source;
    
    UPROPERTY()
    AActor* Target;
    
    UPROPERTY()
    FVector_NetQuantize100 TargetOffset;
    
    UPROPERTY()
    AActor* DamageCauser;
    
    UPROPERTY()
    UImpactData* ImpactDataOverride;
    
    UPROPERTY()
    float SpeedScale;
    
    UPROPERTY()
    float GravityScaleOverride;
    
    UPROPERTY()
    uint16 Flags;
    
    UPROPERTY()
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY()
    uint8 FiringPatternID;
    
    UPROPERTY()
    uint8 FireSocketID;
    
    UPROPERTY()
    uint8 RandomSeed;
    
    UPROPERTY()
    float Damage;
    
    UPROPERTY()
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY()
    TSubclassOf<UDamageSource> DamageSource;
    
    UPROPERTY()
    float DamageRadius;
    
    UPROPERTY()
    float ImpactForce;
    
    UPROPERTY()
    float ModifierValue;
    
    UPROPERTY()
    UParticleSystem* TracerFXOverride;
    
    UPROPERTY()
    UWwiseEvent* BulletByAdditiveLayer;
    
    GBXWEAPON_API FReplicatedLightProjectileInitializationData();
};

