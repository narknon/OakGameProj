#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "DamageGoreModifiers.h"
#include "ForceSelection.h"
#include "EWeaponShotModifierType.h"
#include "CriticalHitDamageOverrides.h"
#include "LightProjectileRingData.h"
#include "LightProjectileInitializationData.generated.h"

class ULightProjectileData;
class UGbxDamageType;
class APawn;
class AActor;
class UDamageSource;
class UImpactData;
class UDamageModifierComponent;

USTRUCT(BlueprintType)
struct GBXWEAPON_API FLightProjectileInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    TSubclassOf<ULightProjectileData> DataBlueprint;
    
    UPROPERTY(BlueprintReadWrite)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite)
    int32 Flags;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator StartRotationOverride;
    
    UPROPERTY(BlueprintReadWrite)
    APawn* Instigator;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Source;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* Target;
    
    UPROPERTY(BlueprintReadWrite)
    FVector TargetOffset;
    
    UPROPERTY(BlueprintReadWrite)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite)
    AActor* DamageCauser;
    
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
    float SpeedScale;
    
    UPROPERTY(BlueprintReadWrite)
    float GravityScaleOverride;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 FiringPatternID;
    
    UPROPERTY(BlueprintReadWrite)
    uint8 FireSocketID;
    
    UPROPERTY(Export, Transient)
    UDamageModifierComponent* DamageModifierComp;
    
    UPROPERTY(BlueprintReadWrite)
    FName NameId;
    
    UPROPERTY(BlueprintReadWrite)
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY(BlueprintReadWrite)
    float ModifierValue;
    
    UPROPERTY(BlueprintReadWrite)
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    UPROPERTY(BlueprintReadWrite)
    FDamageGoreModifiers GoreModifiers;
    
    UPROPERTY()
    FLightProjectileRingData RingData;
    
    FLightProjectileInitializationData();
};

