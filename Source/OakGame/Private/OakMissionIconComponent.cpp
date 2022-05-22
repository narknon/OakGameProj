#include "OakMissionIconComponent.h"

UOakMissionIconComponent::UOakMissionIconComponent() {
    this->IconData = NULL;
    this->VisibleDistanceOverride = 0.00f;
    this->HiddenDistanceOverride = 0.00f;
    this->bDrawIconVisibilityDistance = false;
    this->bDoNotOverrideCondition = false;
}

