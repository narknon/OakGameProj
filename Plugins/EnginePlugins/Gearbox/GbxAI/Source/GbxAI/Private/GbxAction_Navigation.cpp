#include "GbxAction_Navigation.h"

FVector UGbxAction_Navigation::K2_GetExitLocation() const {
    return FVector{};
}

FVector UGbxAction_Navigation::K2_GetEntryLocation() const {
    return FVector{};
}

UGbxAction_Navigation::UGbxAction_Navigation() {
    this->bMaintainRootVelocity = true;
}

