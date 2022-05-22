#include "OakProjectile.h"
#include "OakProjectileBalanceStateComponent.h"

class UBalanceStateComponent;

void AOakProjectile::SetIsGrenade(bool bNewIsGrenade) {
}

void AOakProjectile::OnSkagProjectileStop(const FHitResult& Hit) {
}

UBalanceStateComponent* AOakProjectile::GetBalanceComponent() {
    return NULL;
}

AOakProjectile::AOakProjectile() {
    this->bIgnoreCollisionWithInstigatorAndChildrens = false;
    this->bIsGrenade = false;
    this->bSuppressSpawnModifierEffect = false;
    this->BalanceComponent = CreateDefaultSubobject<UOakProjectileBalanceStateComponent>(TEXT("BalanceStateComponent"));
    this->ElementalEffectBucketType = EOakElementalStackBucketType::Grenade;
    this->bRegisterAsTargetable = false;
    this->bShouldDisplayNameplate = false;
    this->DamageComponent = NULL;
    this->TargetableComponent = NULL;
}

