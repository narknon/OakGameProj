#include "TerritoryComponent.h"

UTerritoryComponent::UTerritoryComponent() {
    this->CombatProxy = ETerritoryCombatProxyType::Threat;
    this->bUseCombatProxy = false;
    this->bAlwaysAwareInThreatArea = false;
    this->DrawStyle = ETerritoryDrawStyle::None;
}

