#include "CrewQuartersRoom.h"
#include "Net/UnrealNetwork.h"

class AOakCharacter_Player;
class UDynamicRoomBaseData;

void ACrewQuartersRoom::OnRoomChangeCountdownTimer() {
}

void ACrewQuartersRoom::OnRep_RoomChangeCountdown() {
}

void ACrewQuartersRoom::OnRep_OwningPlayer() {
}

void ACrewQuartersRoom::OnDeferredRoomSpawn() {
}

void ACrewQuartersRoom::InstanceRoomForPlayer(AOakCharacter_Player* NewOwningPlayer, UDynamicRoomBaseData* RoomToLoad) {
}

void ACrewQuartersRoom::ApplyRoomMood(AOakCharacter_Player* NewOwningPlayer, UDynamicRoomBaseData* RoomToLoad) {
}

void ACrewQuartersRoom::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrewQuartersRoom, OwningPlayer);
    DOREPLIFETIME(ACrewQuartersRoom, RoomChangeCountdown);
}

ACrewQuartersRoom::ACrewQuartersRoom() {
    this->CrewQuartersGlobals = NULL;
    this->RoomAssignmentIndex = 0;
    this->RoomChangeCountdownTime = 0.00f;
    this->RoomChangeCountdownIncrement = 1.00f;
    this->OwningPlayer = NULL;
    this->RoomChangeCountdown = 0;
    this->QueuedPlayer = NULL;
    this->QueuedRoom = NULL;
    this->AreaComponent = NULL;
}

