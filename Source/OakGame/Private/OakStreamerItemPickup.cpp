#include "OakStreamerItemPickup.h"
#include "Net/UnrealNetwork.h"

void AOakStreamerItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakStreamerItemPickup, FirstDonor);
    DOREPLIFETIME(AOakStreamerItemPickup, LargestDonor);
}

AOakStreamerItemPickup::AOakStreamerItemPickup() {
    this->FirstDonorStatData = NULL;
    this->LargestDonorStatData = NULL;
    this->DonorTextHTMLColor = TEXT("'#9146ff'");
}

