#include "OakActionAbility_IronBear.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UOakActionAbility_IronBear::TryToSpawnIronCub() {
}


void UOakActionAbility_IronBear::OnIronCubDestroyed(AActor* IronCub) {
}

void UOakActionAbility_IronBear::OnIronCubDead() {
}

FRotator UOakActionAbility_IronBear::GetIronBearSpawnRotation_Implementation() const {
    return FRotator{};
}

FVector UOakActionAbility_IronBear::GetIronBearSpawnLocation_Implementation() const {
    return FVector{};
}


FVector UOakActionAbility_IronBear::GetCrouchLocationOffset() const {
    return FVector{};
}

bool UOakActionAbility_IronBear::CanSpawnIronBearAtLocation(UClass* ActorClass, const FTransform& Transform) const {
    return false;
}

void UOakActionAbility_IronBear::CancelManualExit() {
}

void UOakActionAbility_IronBear::BeginManualExit() {
}

void UOakActionAbility_IronBear::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_IronBear, bIronCubActive);
}

UOakActionAbility_IronBear::UOakActionAbility_IronBear() {
    this->CurrentIronBear = NULL;
    this->bIronCubActive = false;
}

