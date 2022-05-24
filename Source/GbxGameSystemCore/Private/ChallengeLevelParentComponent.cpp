#include "ChallengeLevelParentComponent.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UChallengeLevelActorComponent;
class AActor;

void UChallengeLevelParentComponent::RemoveAssociatedActorComponent(UChallengeLevelActorComponent* AssociatedComponent) {
}

void UChallengeLevelParentComponent::RemoveAssociatedActor(AActor* AssociatedActor) {
}

void UChallengeLevelParentComponent::ClearAssociatedActors() {
}

void UChallengeLevelParentComponent::AddAssociatedActor(AActor* AssociatedActor, TSubclassOf<UChallengeLevelActorComponent> ComponentClass, FVector RelativeOffset) {
}

void UChallengeLevelParentComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UChallengeLevelParentComponent, AssociatedActors);
}

UChallengeLevelParentComponent::UChallengeLevelParentComponent() {
    this->bHideIfAssociatedActors = false;
}

