#include "OakActionAbility_Barrier.h"
#include "Net/UnrealNetwork.h"

class AActor;

bool UOakActionAbility_Barrier::TryPlaceBarrierAtLocation(FTransform Transform) {
    return false;
}



void UOakActionAbility_Barrier::ServerDoBarrierDropPickup_Implementation() {
}
bool UOakActionAbility_Barrier::ServerDoBarrierDropPickup_Validate() {
    return true;
}

void UOakActionAbility_Barrier::OnBarrierDestroyed(AActor* DestroyedActor) {
}

bool UOakActionAbility_Barrier::HasRuntimeMod(EOperativeBarrierModType ModType) const {
    return false;
}

void UOakActionAbility_Barrier::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_Barrier, RuntimeMods);
    DOREPLIFETIME(UOakActionAbility_Barrier, BarrierActor);
}

UOakActionAbility_Barrier::UOakActionAbility_Barrier() {
    this->BarrierActor = NULL;
}

