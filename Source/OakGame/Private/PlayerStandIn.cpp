#include "PlayerStandIn.h"
#include "Templates/SubclassOf.h"

class UGbxAction;
class UGbxCustomizationData;

void APlayerStandIn::PlayGbxAction(TSubclassOf<UGbxAction> Action) {
}

void APlayerStandIn::HandleCustomizationApplied(UGbxCustomizationData* Customization) {
}

APlayerStandIn::APlayerStandIn() {
    this->StandInType = EPlayerStandInType::Unspecified;
    this->StandInData = NULL;
    this->PendingCoordinatedEffect = NULL;
    this->CharacterInstance = NULL;
    this->SlotIndex = -1;
    this->PlayerStandInDigistructEffect = NULL;
    this->PlayerStandInDigistructOutEffect = NULL;
    this->FrontendStandInHoloEffect = NULL;
}

