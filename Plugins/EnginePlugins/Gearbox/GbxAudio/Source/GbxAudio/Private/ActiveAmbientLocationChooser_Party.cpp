#include "ActiveAmbientLocationChooser_Party.h"

UActiveAmbientLocationChooser_Party::UActiveAmbientLocationChooser_Party() {
    this->PartierWeight = 2.00f;
    this->PartierRadius = 1000.00f;
    this->PartyDecayPerNomination = 0.10f;
    this->bVisualizeParty = false;
    this->PartyVisualizationLineLength = 500.00f;
    this->TotalPartyWeight = 0.00f;
}

