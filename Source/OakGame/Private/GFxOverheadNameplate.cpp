#include "GFxOverheadNameplate.h"

void UGFxOverheadNameplate::OnPlayerLocationChanged(const FVector NewLocation) {
}

UGFxOverheadNameplate::UGFxOverheadNameplate() {
    this->CenteredNameContainer = NULL;
    this->CenteredNameObject = NULL;
    this->StateContainer = NULL;
    this->StateObject = NULL;
    this->StateIndicator = NULL;
    this->StateArrow = NULL;
    this->StateArrowColors = NULL;
    this->WaypointIcon = NULL;
    this->OverheadArrow = NULL;
    this->ReviveBar = NULL;
    this->DyingBar = NULL;
    this->CachedOverheadNameplateHealthState = EOverheadNameplateHealthState::Healthy;
    this->CachedOverheadNameplateDisplayState = EOverheadNameplateDisplayState::None;
}

