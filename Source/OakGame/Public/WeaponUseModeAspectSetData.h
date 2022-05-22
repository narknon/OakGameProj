#pragma once
#include "CoreMinimal.h"
#include "WeaponUseModeAspectSetData.generated.h"

class UWeaponUseModeAspectData;
class UWeaponUseModeSecondaryAspectData;
class UWeaponDamageTypeAspectData;
class UWeaponUseModeNameAspectData;
class UWeaponUseModeCrosshairAspectData;

USTRUCT(BlueprintType)
struct FWeaponUseModeAspectSetData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponUseModeAspectData* Aspect;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TArray<UWeaponUseModeSecondaryAspectData*> SecondaryAspectList;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponDamageTypeAspectData* DamageTypeAspect[2];
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponUseModeNameAspectData* NameAspect;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UWeaponUseModeCrosshairAspectData* CrosshairAspect;
    
    OAKGAME_API FWeaponUseModeAspectSetData();
};

