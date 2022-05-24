#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DamageGoreModifiers.h"
#include "EWeaponShotModifierType.h"
#include "CriticalHitDamageOverrides.h"
#include "WeaponShotModifierData.generated.h"

class UGbxDamageType;
class UImpactData;

USTRUCT(BlueprintType)
struct GBXWEAPON_API FWeaponShotModifierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY(BlueprintReadOnly)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(BlueprintReadOnly)
    UImpactData* ImpactData;
    
    UPROPERTY(BlueprintReadOnly)
    int32 ProjectilesPerShot;
    
    UPROPERTY(BlueprintReadOnly)
    FCriticalHitDamageOverrides CriticalHitOverrides;
    
    UPROPERTY(BlueprintReadOnly)
    float ModifierValue;
    
    UPROPERTY(BlueprintReadOnly)
    FDamageGoreModifiers GoreModifiers;
    
    FWeaponShotModifierData();
};

