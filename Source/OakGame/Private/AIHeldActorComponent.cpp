#include "AIHeldActorComponent.h"
#include "Templates/SubclassOf.h"

class AActor;

void UAIHeldActorComponent::ThrowHeldActorAtTarget(float ThrowSpeed, float ThrowAnglePercent, FName TargetSocket, FVector TargetOffset, FRotator AngleOffset, float MaxPrediction, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist) {
}

void UAIHeldActorComponent::ThrowHeldActorAtLocation(FVector ThrowAtLocation, float ThrowSpeed, float ThrowAnglePercent, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist) {
}

void UAIHeldActorComponent::ThrowHeldActorAtActor(AActor* ThrowAtActor, float ThrowSpeed, float ThrowAnglePercent, FName ActorSocket, FVector ActorOffset, FRotator AngleOffset, float MaxPrediction, bool bRequestNewHeldActor, bool bSpawnIfDoesNotExist) {
}

void UAIHeldActorComponent::SpawnHeldActor() {
}

void UAIHeldActorComponent::SetNewHeldActorClass(TSubclassOf<AActor> NewHeldActorClass) {
}

void UAIHeldActorComponent::PrimeHeldActor() {
}

void UAIHeldActorComponent::OnTriggerPreset(EHeldActorPreset Preset) {
}

void UAIHeldActorComponent::OnHeldActorSpawned(AActor* NewHeldActor) {
}


EOakElementalType UAIHeldActorComponent::GetHeldActorElementalType() const {
    return EOakElementalType::None;
}

AActor* UAIHeldActorComponent::GetHeldActor() const {
    return NULL;
}

void UAIHeldActorComponent::DropHeldActor(bool bRequestNewHeldActor, AActor* InstigatorOverride) {
}

void UAIHeldActorComponent::DetonateHeldActor(bool bKillSelf, bool bRequestNewHeldActor, AActor* InstigatorOverride) {
}

UAIHeldActorComponent::UAIHeldActorComponent() {
    this->DeathTag = NULL;
    this->bAutofillDeathTag = true;
    this->bDisableCollisionWhileHeld = true;
    this->DroppedCollisionProfile = TEXT("BlockAllProjectile");
    this->bChangeCollisionProfileOnDrop = false;
    this->bInitialized = false;
    this->HeldActor = NULL;
    this->TargetingComponent = NULL;
    this->BlackboardComponent = NULL;
    this->ClientDisabledCollisionActor = NULL;
}

