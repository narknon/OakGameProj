#include "GFxMinimapWidgetIcon.h"

FGFxMinimapWidgetIcon::FGFxMinimapWidgetIcon() {
    this->bIsAreaWaypoint = false;
    this->bClampRadarEdge = false;
    this->MaxClampDistance = 0.00f;
    this->bShouldBeVisibleIfInRange = false;
    this->bStaticIconLocation = false;
    this->WaypointRadius = 0;
    this->IconInstance = NULL;
    this->bCachedVisible = false;
    this->TrackedType = EGFxMinimapWidgetIconTrackedType::Unused;
    this->AreaWaypointIconSize = 0.00f;
    this->CurrentTransitionTime = 0.00f;
}

