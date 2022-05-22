#include "IronBearBubbleShieldAnimInstance.h"

void UIronBearBubbleShieldAnimInstance::OnRailgunStartFiring() {
}

void UIronBearBubbleShieldAnimInstance::OnRailgunFired_Default() {
}

void UIronBearBubbleShieldAnimInstance::OnRailgunFinishFiring() {
}

UIronBearBubbleShieldAnimInstance::UIronBearBubbleShieldAnimInstance() {
    this->BlendPose = 0;
    this->SpinDownRateMultiplier = 0.85f;
    this->SpinUpRateMultiplier = 1.40f;
    this->RailgunHardpoint = NULL;
    this->bCanBeginSpinning = false;
    this->NewRotationRate = 1.00f;
}

