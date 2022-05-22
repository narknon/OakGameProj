#include "StandInCharacterComponent.h"

class AActor;

void UStandInCharacterComponent::OnAuxiliaryActorDestroyed(AActor* Actor) {
}

UStandInCharacterComponent::UStandInCharacterComponent() {
    this->SkillScreenUnlockAnimation = NULL;
    this->UnlockAnimationDelay = 0.00f;
    this->UnlockedAnimStateDelay = 0.40f;
    this->bShowMeleeWeaponOnCharacterCreate = false;
    this->bShowMeleeWeaponOnCharacterSelect = false;
    this->Character = NULL;
    this->OwningPlayer = NULL;
    this->LastSlottedItem = NULL;
}

