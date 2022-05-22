#include "InWorldDamageNumber.h"

class UUserWidget;

void UInWorldDamageNumber::OnWentOffscreen() {
}

void UInWorldDamageNumber::ImpulseAnimationCompleted(UUserWidget* AssociatedWidget) {
}

UInWorldDamageNumber::UInWorldDamageNumber() {
    this->DisplayField = NULL;
    this->DisplayPanel = NULL;
    this->InstigatingPlayer = NULL;
    this->DamageNumberContainer = NULL;
}

