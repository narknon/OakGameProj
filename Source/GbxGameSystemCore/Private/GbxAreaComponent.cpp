#include "GbxAreaComponent.h"

void UGbxAreaComponent::AreaTest() {
}

UGbxAreaComponent::UGbxAreaComponent() {
    this->bWorldAreaVolume = false;
    this->DetectionRadius = 0.00f;
    this->DetectionHalfHeight = 0.00f;
    this->bWorldAreaRadius = false;
    this->bManualTest = false;
    this->DrawStyle = EGbxAreaDrawStyle::Wire;
}

