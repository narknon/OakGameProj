#include "AIUseSlotComponent.h"

void UAIUseSlotComponent::GetAvailableSocketNames(TArray<FName>& Array) const {
}

UAIUseSlotComponent::UAIUseSlotComponent() {
    this->bEnabled = true;
    this->bSnapToGround = true;
    this->AlignRule = ESlotAlignRule::Align;
    this->bInterpOnArrival = false;
    this->bInterpRotationOnArrival = false;
    this->InterpOnArrivalTime = 0.10f;
    this->LookAtRule = ESmartObjectLookAtRule::None;
    this->bOverrideLookAtRule = false;
    this->Radius = 50.00f;
    this->bMaxUsers = true;
    this->MaxUsers = 1;
    this->bForceUsePhysNoneWithRootMotion = false;
}

