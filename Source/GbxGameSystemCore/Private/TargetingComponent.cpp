#include "TargetingComponent.h"
#include "Templates/SubclassOf.h"

class AActor;
class UTargetableComponent;
class UAISense;

void UTargetingComponent::ServerSetBestTarget_Implementation(AActor* NewBestTarget) {
}
bool UTargetingComponent::ServerSetBestTarget_Validate(AActor* NewBestTarget) {
    return true;
}

bool UTargetingComponent::IsBestTargetDirectlySensed(int32 TargetIndex) const {
    return false;
}

bool UTargetingComponent::HasTargets() const {
    return false;
}

bool UTargetingComponent::HasTarget(const AActor* Actor) const {
    return false;
}

bool UTargetingComponent::GetTargetLocationForActor(const AActor* Actor, FVector& TargetLocation) const {
    return false;
}

bool UTargetingComponent::GetTargetInfoForActor(const AActor* Actor, FTargetActorInfo& TargetInfo) const {
    return false;
}

int32 UTargetingComponent::GetTargetInfoCount() const {
    return 0;
}

bool UTargetingComponent::GetTargetInfoAt(int32 TargetIndex, FTargetActorInfo& TargetInfo) const {
    return false;
}

AActor* UTargetingComponent::GetTargetActorAt(int32 TargetIndex) const {
    return NULL;
}

AActor* UTargetingComponent::GetBestThreatActor(bool bRequireFirsthandKnowledge) const {
    return NULL;
}

FVector UTargetingComponent::GetBestTargetLocation(int32 TargetIndex) const {
    return FVector{};
}

bool UTargetingComponent::GetBestTargetInfo(FTargetActorInfo& TargetInfo, int32 TargetIndex) const {
    return false;
}

AActor* UTargetingComponent::GetBestTargetActor(int32 TargetIndex) const {
    return NULL;
}

UTargetableComponent* UTargetingComponent::GetBestTargetableComponent(int32 TargetIndex) const {
    return NULL;
}

FVector UTargetingComponent::GetBestAttackTargetLocation(FVector& OutTargetVelocity, int32 TargetIndex) const {
    return FVector{};
}

bool UTargetingComponent::DoesBestTargetHaveStimulusForSense(TSubclassOf<UAISense> Sense, float MaxAge, int32 TargetIndex) const {
    return false;
}

UTargetingComponent::UTargetingComponent() {
    this->QueryFrequency = 0.10f;
    this->bQueryImmediately = false;
    this->bOnlyTargetThreatsToPlayers = false;
    this->CurrentTargetable = NULL;
}

