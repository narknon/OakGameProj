#include "SpawnPerformance_10Components.h"
#include "Particles/ParticleSystemComponent.h"
#include "BalanceStateComponent.h"
#include "ElementalInteractionComponent.h"
#include "OakDamageComponent.h"
#include "Components/StaticMeshComponent.h"
#include "OakMissionIconComponent.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "UsableComponent.h"
#include "WwiseAudioComponent.h"

ASpawnPerformance_10Components::ASpawnPerformance_10Components() {
    this->BalanceStateComponent = CreateDefaultSubobject<UBalanceStateComponent>(TEXT("BalanceStateComponent"));
    this->DamageReceiverComponent = CreateDefaultSubobject<UOakDamageComponent>(TEXT("DamageReceiverComponent"));
    this->ElementalInteractionComponent = CreateDefaultSubobject<UElementalInteractionComponent>(TEXT("ElementalInteractionComponent"));
    this->OakMissionIconComponent = CreateDefaultSubobject<UOakMissionIconComponent>(TEXT("OakMissionIconComponent"));
    this->ParticleSystemComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemComponent"));
    this->RotatingMovementComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
    this->StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
    this->UsableComponent = CreateDefaultSubobject<UUsableComponent>(TEXT("UsableComponent"));
    this->WwiseAudioComponent = CreateDefaultSubobject<UWwiseAudioComponent>(TEXT("WwiseAudioComponent"));
}

