#include "TeamComponent.h"
#include "Net/UnrealNetwork.h"

class UTeam;
class UTeamComponent;
class AActor;

void UTeamComponent::SetTeamToDefault() {
}

void UTeamComponent::SetTeamCollision(bool bOn) {
}

void UTeamComponent::SetTeam(UTeam* NewTeam) {
}

void UTeamComponent::SetSourceTeamComponent(UTeamComponent* NewSourceTeamComponent) {
}

void UTeamComponent::SetCollidesWithTeam(bool bCollidesWithTeam) {
}

void UTeamComponent::OnRep_Team(UTeam* OldTeam) {
}

void UTeamComponent::OnRep_bIgnoreCollisionWithTeam() {
}

bool UTeamComponent::IsNeutral(const AActor* Actor) const {
    return false;
}

bool UTeamComponent::IsHostile(const AActor* Actor) const {
    return false;
}

bool UTeamComponent::IsFriendly(const AActor* Actor) const {
    return false;
}

void UTeamComponent::InitializeTeam(UTeam* NewTeam) {
}

ETeamCollisionChannel UTeamComponent::GetTeamCollisionChannel() const {
    return ETeamCollisionChannel::One;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetTeamAttitudeTowardsTeam(const UTeam* OtherTeam) const {
    return ETeamAttitude::Friendly;
}

TEnumAsByte<ETeamAttitude::Type> UTeamComponent::GetTeamAttitudeTowardsActor(const AActor* Actor) const {
    return ETeamAttitude::Friendly;
}

void UTeamComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTeamComponent, Team);
    DOREPLIFETIME(UTeamComponent, TeamDefault);
    DOREPLIFETIME(UTeamComponent, bIgnoreCollisionWithTeam);
}

UTeamComponent::UTeamComponent() {
    this->Team = NULL;
    this->TeamDefault = NULL;
    this->bSetTeamCollision = true;
    this->bIgnoreCollisionWithTeam = false;
    this->bInheritSourceTeamFromInstigator = false;
    this->SourceTeamComponent = NULL;
}

