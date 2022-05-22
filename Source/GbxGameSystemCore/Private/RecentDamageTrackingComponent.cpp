#include "RecentDamageTrackingComponent.h"
#include "Net/UnrealNetwork.h"

void URecentDamageTrackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(URecentDamageTrackingComponent, RecentlyCausedDamageInstances);
}

URecentDamageTrackingComponent::URecentDamageTrackingComponent() {
    this->PlayerController = NULL;
}

