#include "InWorldIconData.h"

UInWorldIconData::UInWorldIconData() {
    this->bIsAreaWaypoint = false;
    this->bHasSpecialMinimapVersion = false;
    this->bClampRadarEdge = false;
    this->MaxClampDistance = 0.00f;
    this->InWorldIconType = EInWorldIconClassType::Icon;
    this->EdgeBehavior = EInWorldIconEdgeBehavior::Clamp;
    this->bUseVisibilityRange = false;
    this->FadeType = EInWorldIconFadeType::Distance;
    this->HiddenDistance = 0.00f;
    this->VisibleDistance = 0.00f;
    this->LifeTime = -1.00f;
    this->MinimapIcon = NULL;
    this->MinimapAreaIcon = NULL;
    this->bStackable = false;
    this->IconOffsetValue = 0.00f;
}

