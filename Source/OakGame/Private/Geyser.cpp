#include "Geyser.h"
#include "Net/UnrealNetwork.h"
#include "Components/CapsuleComponent.h"
#include "Particles/ParticleSystemComponent.h"

void AGeyser::OnSteamOn_Implementation() {
}

void AGeyser::OnSteamOff_Implementation() {
}

void AGeyser::OnRep_GeyserState() {
}

void AGeyser::OnAnticipationStopped_Implementation() {
}

void AGeyser::OnAnticipationStarted_Implementation() {
}

EGeyserState AGeyser::GetGeyserState() const {
    return EGeyserState::None;
}

void AGeyser::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGeyser, GeyserState);
}

AGeyser::AGeyser() {
    this->CapsuleCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("UCapsuleComponent"));
    this->ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
    this->ParticleSystemAnticipation = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystemAnticipation"));
    this->GeyserData = NULL;
    this->bAutoAdjustParticleToCapsuleHeight = false;
    this->GeyserState = EGeyserState::None;
}

