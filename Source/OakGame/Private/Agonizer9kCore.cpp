#include "Agonizer9kCore.h"
#include "TargetableComponent.h"
#include "OakDamageComponent.h"
#include "Components/SphereComponent.h"

AAgonizer9kCore::AAgonizer9kCore() {
    this->TargetableComponent = CreateDefaultSubobject<UTargetableComponent>(TEXT("Targetable Component"));
    this->DamageComponent = CreateDefaultSubobject<UOakDamageComponent>(TEXT("Damage Component"));
    this->RootSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("Root Sphere"));
}

