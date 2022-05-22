#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponBalanceStateComponent.h"
#include "TedioreWeaponBalanceStateComponent.generated.h"

class ATedioreProjectile;
class UTedioreWeaponAspectData;
class UTedioreProjectileClassAspect;
class UTedioreBehavior;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTedioreWeaponBalanceStateComponent : public UWeaponBalanceStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<UTedioreWeaponAspectData*> TedioreAspects;
    
    UPROPERTY(Transient)
    TArray<UTedioreBehavior*> Behaviors;
    
    UPROPERTY(Transient)
    UTedioreProjectileClassAspect* TedioreProjectileClass;
    
public:
    UTedioreWeaponBalanceStateComponent();
    UFUNCTION(BlueprintPure)
    TSubclassOf<ATedioreProjectile> GetTedioreProjectileClass() const;
    
};

