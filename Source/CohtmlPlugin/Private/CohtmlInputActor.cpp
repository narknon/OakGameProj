#include "CohtmlInputActor.h"

class UCohtmlBaseComponent;

void ACohtmlInputActor::ToggleCohtmlInputFocus() {
}

void ACohtmlInputActor::SetLineTraceMode(TEnumAsByte<ECohtmlInputWidgetLineTraceMode> Mode) {
}

void ACohtmlInputActor::SetInputPropagationBehaviour(TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> Propagation) {
}

void ACohtmlInputActor::SetCohtmlViewFocus(UCohtmlBaseComponent* NewFocusedView) {
}

void ACohtmlInputActor::SetCohtmlInputFocus(bool FocusUI) {
}

bool ACohtmlInputActor::IsCohtmlFocused() const {
    return false;
}

void ACohtmlInputActor::Initialize(TEnumAsByte<ECollisionChannel> CollisionChannel, TEnumAsByte<TextureAddress> AddressMode, TEnumAsByte<ECohtmlInputWidgetRaycastQuality> RaycastQuality, int32 UVChannel) {
}

TEnumAsByte<ECohtmlInputPropagationBehaviour::Type> ACohtmlInputActor::GetInputPropagationBehaviour() const {
    return ECohtmlInputPropagationBehaviour::None;
}

void ACohtmlInputActor::AlwaysAcceptMouseInput(bool bAccept) {
}

ACohtmlInputActor::ACohtmlInputActor() {
}

