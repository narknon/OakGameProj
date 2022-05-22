#include "BeastmasterStandInComponent.h"

void UBeastmasterStandInComponent::TriggerFlourishCE() {
}

void UBeastmasterStandInComponent::SetMeleeMeshVisible(bool bVisible) {
}

UBeastmasterStandInComponent::UBeastmasterStandInComponent() {
    this->BeastmasterSpawnPetAnimation = NULL;
    this->PetSpawnAnimation = NULL;
    this->InitialActionSkillFlourishDelay = 1.50f;
    this->ActionSkillSlot = NULL;
    this->PetSlot = NULL;
    this->MeleeMeshComponent = NULL;
    this->CurrentPet = NULL;
    this->CurrentActionAbility = NULL;
}

