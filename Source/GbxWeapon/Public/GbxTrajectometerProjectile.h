#pragma once
#include "CoreMinimal.h"
#include "Projectile.h"
#include "GbxTrajectometerProjectile.generated.h"

class UParticleSystemComponent;

UCLASS()
class GBXWEAPON_API AGbxTrajectometerProjectile : public AProjectile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* TrailParticle;
    
public:
    AGbxTrajectometerProjectile();
};

