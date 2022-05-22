#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EWeaponShotModifierType.h"
#include "GbxDataAsset.h"
#include "AttributeInitializationData.h"
#include "EWeaponShotDamageModifierType.h"
#include "ECriticalHitDamageOverride.h"
#include "WeaponShotModifier.generated.h"

class UImpactData;
class UGbxDamageType;
class UConditionalDamageModifier;

UCLASS(EditInlineNew)
class GBXWEAPON_API UWeaponShotModifier : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bTriggerEveryXShots;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData TriggerEveryXShots;
    
    UPROPERTY(EditAnywhere)
    EWeaponShotModifierType ModifierType;
    
    UPROPERTY(EditAnywhere)
    bool bModifyDamage;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData DamageModifier;
    
    UPROPERTY(EditAnywhere)
    EWeaponShotDamageModifierType DamageModifierType;
    
    UPROPERTY(EditAnywhere)
    bool bDistributeBetweenProjectiles;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxDamageType> DamageType;
    
    UPROPERTY(EditAnywhere)
    UImpactData* ImpactData;
    
    UPROPERTY(EditAnywhere)
    ECriticalHitDamageOverride CriticalHitModifier;
    
    UPROPERTY(EditAnywhere)
    bool bUseDefaultCriticalHitMultiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData AdditionalCriticalMultiplier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GoreModifier;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData GibModifier;
    
    UPROPERTY(EditAnywhere, Instanced)
    UConditionalDamageModifier* ConditionalDamageModifier;
    
    UPROPERTY(EditAnywhere)
    bool bPassConditionalDamageModifierToChildProjectiles;
    
    UPROPERTY(EditAnywhere)
    bool bRefundShotCostWhenTriggered;
    
    UPROPERTY(EditAnywhere)
    bool bSuppressRefundThatWouldPreventReload;
    
    UWeaponShotModifier();
};

