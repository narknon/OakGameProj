#include "GbxUIScroller.h"

FGbxUIScroller::FGbxUIScroller() {
    this->Acceleration = 0.00f;
    this->ItemSize = 0.00f;
    this->MaxVelocity = 0.00f;
    this->MinVelocity = 0.00f;
    this->bUseFixedVelocity = false;
    this->FixedVelocity = 0.00f;
    this->ScrollPosition = 0.00f;
    this->DesiredPosition = 0.00f;
    this->WindowSize = 0.00f;
    this->FullSize = 0.00f;
    this->CurVelocity = 0.00f;
    this->DesiredVelocity = 0.00f;
    this->bHasMoved = false;
    this->bIsMoving = false;
    this->bHasSlowedDown = false;
}

