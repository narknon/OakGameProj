#include "OakInventoryBalanceStateComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UOakInventoryBalanceStateComponent::HandleActorDestroyed(AActor* Actor) {
}

void UOakInventoryBalanceStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakInventoryBalanceStateComponent, bIsInstanced);
}

UOakInventoryBalanceStateComponent::UOakInventoryBalanceStateComponent() {
    this->bIsInstanced = false;
}

