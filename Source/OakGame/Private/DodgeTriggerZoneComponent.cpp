#include "DodgeTriggerZoneComponent.h"

UDodgeTriggerZoneComponent::UDodgeTriggerZoneComponent() {
    this->MinVelocityToDodge = 500.00f;
    this->MaxVelocityToScale = 4000.00f;
    this->DodgeLength = 600.00f;
    this->Radius = 200.00f;
    this->MaxScale = 5.00f;
    this->StartOffsetX = 200.00f;
    this->OffsetZ = 100.00f;
}

