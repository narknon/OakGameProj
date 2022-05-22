#include "TargetingDebugServerRpcComponent.h"

class AActor;

void UTargetingDebugServerRpcComponent::SetInspectedActor_Implementation(AActor* Actor) {
}
bool UTargetingDebugServerRpcComponent::SetInspectedActor_Validate(AActor* Actor) {
    return true;
}

UTargetingDebugServerRpcComponent::UTargetingDebugServerRpcComponent() {
}

