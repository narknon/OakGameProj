#include "ZoneMapPOIAIComponent.h"

class UTeamComponent;
class UTeam;

void UZoneMapPOIAIComponent::OnTeamChanged(UTeamComponent* TeamComponent, UTeam* PrevTeam) {
}

void UZoneMapPOIAIComponent::DelayedTeamChanged() {
}

void UZoneMapPOIAIComponent::DelayedRemovePOI() {
}

UZoneMapPOIAIComponent::UZoneMapPOIAIComponent() {
    this->FriendlyPOIType = NULL;
    this->EnemyPOIType = NULL;
}

