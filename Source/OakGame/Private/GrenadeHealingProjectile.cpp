#include "GrenadeHealingProjectile.h"
#include "Net/UnrealNetwork.h"
#include "WwiseAudioComponent.h"
#include "ProjectileHomingComponent.h"
#include "Components/SphereComponent.h"

class UPrimitiveComponent;
class AActor;

void AGrenadeHealingProjectile::OnOverlapActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void AGrenadeHealingProjectile::HealHomingTarget() {
}

void AGrenadeHealingProjectile::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGrenadeHealingProjectile, HealingParticles);
    DOREPLIFETIME(AGrenadeHealingProjectile, AudioComponent);
    DOREPLIFETIME(AGrenadeHealingProjectile, PersistantAudioEvent);
    DOREPLIFETIME(AGrenadeHealingProjectile, HealingAudioEvent);
}

AGrenadeHealingProjectile::AGrenadeHealingProjectile() {
    this->HomingComponent = CreateDefaultSubobject<UProjectileHomingComponent>(TEXT("HomingComponent"));
    this->SphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
    this->HealingDamageData = NULL;
    this->HealingDamageType = NULL;
    this->DamagePercent = 0.00f;
    this->TriggeringHealthType = NULL;
    this->HealingParticles = NULL;
    this->AudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("AudioComponent"));
    this->PersistantAudioEvent = NULL;
    this->HealingAudioEvent = NULL;
}

