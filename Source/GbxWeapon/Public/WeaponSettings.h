#pragma once
#include "CoreMinimal.h"
#include "WeaponEffectTypeName.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "WeaponShotModifierTypeName.h"
#include "WeaponActionTypeName.h"
#include "LightProjectileFlagName.h"
#include "LightBeamFlagName.h"
#include "WeaponSettings.generated.h"

UCLASS(DefaultConfig)
class GBXWEAPON_API UWeaponSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config)
    TArray<FWeaponEffectTypeName> WeaponEffectTypes;
    
    UPROPERTY(Config)
    TArray<FWeaponActionTypeName> WeaponActionTypes;
    
    UPROPERTY(Config)
    TArray<FLightProjectileFlagName> LightProjectileFlags;
    
    UPROPERTY(Config)
    TArray<FLightBeamFlagName> LightBeamFlags;
    
    UPROPERTY(Config)
    TArray<FWeaponShotModifierTypeName> WeaponShotModifierTypes;
    
public:
    UWeaponSettings();
};

