#include "OakRecentDamageTrackingComponent.h"
#include "Net/UnrealNetwork.h"

void UOakRecentDamageTrackingComponent::OnRep_RecentIncomingDamageData() {
}

void UOakRecentDamageTrackingComponent::ClientPlayDamagePresentation_Implementation(const FTriggeredDamagePresentation& Presentation) {
}

void UOakRecentDamageTrackingComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakRecentDamageTrackingComponent, ServerRecentIncomingDamageData);
}

UOakRecentDamageTrackingComponent::UOakRecentDamageTrackingComponent() {
    this->Globals = NULL;
    this->DamageNumberParticleComponent = NULL;
    this->ScreenParticleManagerComponent = NULL;
    this->IncomingDamageParticleComponent_Health = NULL;
    this->IncomingDamageParticleComponent_Shield = NULL;
    this->IncomingDamageParticleComponent_Armor = NULL;
}

