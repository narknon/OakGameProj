#include "CrewQuartersInteractiveObject.h"
#include "Net/UnrealNetwork.h"

class AOakPlayerController;

void ACrewQuartersInteractiveObject::OnRep_OwningRoom() {
}

bool ACrewQuartersInteractiveObject::IsInteractiveObjectOwnedBy(AOakPlayerController* User) {
    return false;
}

void ACrewQuartersInteractiveObject::ClientOpenMenu_Implementation(AOakPlayerController* OakPC) {
}

void ACrewQuartersInteractiveObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrewQuartersInteractiveObject, OwningRoom);
}

ACrewQuartersInteractiveObject::ACrewQuartersInteractiveObject() {
    this->CrewQuartersIOMenuData = NULL;
    this->OwningRoom = NULL;
    this->bRestrictUseToOwningPlayer = false;
}

