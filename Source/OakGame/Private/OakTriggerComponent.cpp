#include "OakTriggerComponent.h"

class UPrimitiveComponent;
class AActor;

void UOakTriggerComponent::ResetTrigger() {
}

void UOakTriggerComponent::NotifyActorComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UOakTriggerComponent::NotifyActorComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void UOakTriggerComponent::HandleTriggerEvents(AActor* OtherActor, EOakTriggerComponentEventType EVENTTYPE, UPrimitiveComponent* OptionalTouchedComponent) {
}

void UOakTriggerComponent::GetValidComponentNames(TArray<FName>& ComponentNames) const {
}

void UOakTriggerComponent::EnableTrigger(bool bEnableTrigger) {
}

UOakTriggerComponent::UOakTriggerComponent() {
    this->MaxTriggerEvents = 0;
    this->TriggerDelay = 0.00f;
    this->EnabledCondition = NULL;
    this->bPlayerInstigatedEventsOnly = true;
    this->bUseSelfAsSecondContext = false;
    this->ActorCanTriggerCondition = NULL;
    this->bEnabled = true;
}

