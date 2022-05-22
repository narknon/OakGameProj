#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TedioreBehavior.h"
#include "UObject/NoExportTypes.h"
#include "TedioreBehavior_Shooting.generated.h"

class UEffectCollectionData;
class UParticleSystem;
class ATedioreProjectile;

UCLASS(EditInlineNew)
class UTedioreBehavior_Shooting : public UTedioreBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UEffectCollectionData> MuzzleEffectCollection;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* LaserSightTemplate;
    
    UPROPERTY(EditDefaultsOnly)
    FVector LaserSightMuzzleOffset;
    
    UPROPERTY(EditDefaultsOnly)
    float ShotDamageScale;
    
    UPROPERTY(EditDefaultsOnly)
    float ShotSpeedScale;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MinShotsFired;
    
    UPROPERTY(EditDefaultsOnly)
    float NumShotsFiredScale;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUseMaxAmmo;
    
    UPROPERTY(EditDefaultsOnly)
    float ConeAngleMin;
    
    UPROPERTY(EditDefaultsOnly)
    float ConeAngleMax;
    
public:
    UTedioreBehavior_Shooting();
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnOutOfAmmo(ATedioreProjectile* Projectile) const;
    
};

