#include "TransporterTrackComponent.h"
#include "Net/UnrealNetwork.h"

class ATransporterCrane;

void UTransporterTrackComponent::SetOverrideCrane(ATransporterCrane* NextCrane) {
}

void UTransporterTrackComponent::ReverseTrack() {
}

void UTransporterTrackComponent::ResumeTrack() {
}

void UTransporterTrackComponent::PauseTrack() {
}

void UTransporterTrackComponent::ManualSpawnCrane(bool ResetTimer) {
}

void UTransporterTrackComponent::EnableCranes(bool bEnable) {
}

void UTransporterTrackComponent::CraneReachedPickupPoint_Implementation(ATransporterCrane* Crane) {
}

void UTransporterTrackComponent::CraneReachedEnd_Implementation(ATransporterCrane* Crane) {
}

void UTransporterTrackComponent::CraneBeginTrack_Implementation(ATransporterCrane* Crane) {
}

void UTransporterTrackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTransporterTrackComponent, bReversed);
}

UTransporterTrackComponent::UTransporterTrackComponent() {
    this->TimeBetweenCranes = 20.00f;
    this->TimeBetweenPickups = 40.00f;
    this->CarryingSpeed = 500.00f;
    this->PickupLocation = NULL;
    this->bStartWithCranes = false;
    this->bReversed = false;
}

