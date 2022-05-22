#include "SirenStandInComponent.h"

class UGbxCustomizationData;

void USirenStandInComponent::SetGhostArmsVisible(bool bNewVisible) {
}

void USirenStandInComponent::OnCustomizationApplied(UGbxCustomizationData* Customization) {
}

USirenStandInComponent::USirenStandInComponent() {
    this->EndingAnimation = NULL;
    this->GhostArmsComponent = NULL;
    this->bShowArmsOnCharacterCreate = true;
    this->bShowArmsOnCharacterSelect = true;
    this->CurrentFlourishAuxiliaryActor = NULL;
    this->CurrentSlottedPrimaryAugment = NULL;
}

