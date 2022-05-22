#include "SingularityComponent.h"

class UPrimitiveComponent;
class AActor;
class USingularityComponent;

void USingularityComponent::OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void USingularityComponent::OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void USingularityComponent::CreateSingularityBurst(AActor* Instigator, const FSingularityBurstInfo& SingularityInfo) {
}

USingularityComponent* USingularityComponent::CreateSingularity(AActor* Owner, float Radius, const FSingularityInitializationInfo& SingularityInfo) {
    return NULL;
}

USingularityComponent::USingularityComponent() {
    this->OwningProjectile = NULL;
    this->OwnerTeam = NULL;
    this->SingularityParticles = NULL;
    this->PullTag = NULL;
}

