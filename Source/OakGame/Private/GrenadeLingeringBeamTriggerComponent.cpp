#include "GrenadeLingeringBeamTriggerComponent.h"

class UPrimitiveComponent;
class AActor;

void UGrenadeLingeringBeamTriggerComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void UGrenadeLingeringBeamTriggerComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UGrenadeLingeringBeamTriggerComponent::UGrenadeLingeringBeamTriggerComponent() {
    this->BeamData = NULL;
    this->DamageType = NULL;
    this->DamageSource = NULL;
}

