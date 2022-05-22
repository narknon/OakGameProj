#include "PassthroughBalanceStateComponent.h"
#include "Net/UnrealNetwork.h"

void UPassthroughBalanceStateComponent::OnPassthroughTargetLevelChanged(int32 OldLevel, int32 NewLevel) {
}

void UPassthroughBalanceStateComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPassthroughBalanceStateComponent, PassthroughTarget);
}

UPassthroughBalanceStateComponent::UPassthroughBalanceStateComponent() {
}

