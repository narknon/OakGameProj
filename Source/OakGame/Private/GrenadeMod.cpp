#include "GrenadeMod.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"

AGrenadeMod::AGrenadeMod() {
    this->BalanceStateComponent = NULL;
    this->Mesh3P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh3P"));
    this->MeshOverride = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("OverrideMesh"));
    this->GrenadeDelivery = NULL;
    this->ExplosionDataOverride = NULL;
    this->DefaultGrenadeForce = 37500.00f;
    this->GrenadeThrowAnimationOverride = 0;
}

