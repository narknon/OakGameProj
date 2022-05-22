#include "StreamerLootableObject.h"
#include "Net/UnrealNetwork.h"

class AOakPlayerController;

void AStreamerLootableObject::TriggerShowEffectSlideout_Implementation(AOakPlayerController* OakPC) {
}


void AStreamerLootableObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AStreamerLootableObject, DonationTier);
}

AStreamerLootableObject::AStreamerLootableObject() {
    this->LargestDonationAmount = 0;
    this->ChestWaypoint = NULL;
    this->DonationTier = 0;
    this->ChestWorldIconData = NULL;
    this->ChestWaypointVerticalOffset = 25.00f;
}

