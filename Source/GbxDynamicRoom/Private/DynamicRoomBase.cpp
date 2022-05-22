#include "DynamicRoomBase.h"
#include "Net/UnrealNetwork.h"
#include "Components/BillboardComponent.h"

class UDynamicRoomBaseData;
class AGbxCharacter;

bool ADynamicRoomBase::VisibleForAllPlayers() {
    return false;
}

void ADynamicRoomBase::UnloadRoom() {
}

void ADynamicRoomBase::SelectedRoomVisible() {
}

void ADynamicRoomBase::SelectedRoomLoaded() {
}

void ADynamicRoomBase::SelectedRoomClassLoaded() {
}

void ADynamicRoomBase::OnRep_RoomInfoToLoad(FDynamicRoomReplicationInfo& OldRoomInfoToLoad) {
}

void ADynamicRoomBase::InstanceRoom(UDynamicRoomBaseData* RoomToLoad) {
}

void ADynamicRoomBase::InstanceRandomRoom() {
}

void ADynamicRoomBase::GetPlayersInLevel(TArray<AGbxCharacter*>& Players) {
}

UDynamicRoomBaseData* ADynamicRoomBase::GetCurrentRoomData() {
    return NULL;
}

void ADynamicRoomBase::GetAvailableRoomData(TArray<UDynamicRoomBaseData*>& AvailableRooms) {
}

void ADynamicRoomBase::AllPlayerVisibilityTest() {
}

void ADynamicRoomBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADynamicRoomBase, RoomInfoToLoad);
}

ADynamicRoomBase::ADynamicRoomBase() {
    this->bShowRandomRoomOnStartup = false;
    this->SpriteComponent = CreateDefaultSubobject<UBillboardComponent>(TEXT("Sprite"));
    this->CachedRoomDataReference = NULL;
}

