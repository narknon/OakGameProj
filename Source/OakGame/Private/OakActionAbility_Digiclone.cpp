#include "OakActionAbility_Digiclone.h"
#include "Net/UnrealNetwork.h"

class AActor;



void UOakActionAbility_Digiclone::StartDigicloneSwapCooldown() {
}


void UOakActionAbility_Digiclone::SpawnDigiclone(const FVector& Location) {
}

void UOakActionAbility_Digiclone::ServerSwapPlaces_Implementation() {
}
bool UOakActionAbility_Digiclone::ServerSwapPlaces_Validate() {
    return true;
}

void UOakActionAbility_Digiclone::ServerDetonateClone_Implementation() {
}
bool UOakActionAbility_Digiclone::ServerDetonateClone_Validate() {
    return true;
}

void UOakActionAbility_Digiclone::ServerCancelDetonateClone_Implementation() {
}
bool UOakActionAbility_Digiclone::ServerCancelDetonateClone_Validate() {
    return true;
}

void UOakActionAbility_Digiclone::ServerBeginDetonateClone_Implementation() {
}
bool UOakActionAbility_Digiclone::ServerBeginDetonateClone_Validate() {
    return true;
}


void UOakActionAbility_Digiclone::OnRep_CurrentDigiclone() {
}




void UOakActionAbility_Digiclone::OnDigicloneRespawnCooldownFilled(FGameResourcePoolReference ResourcePool) {
}


void UOakActionAbility_Digiclone::OnDigicloneDestroyed(AActor* Digiclone) {
}

void UOakActionAbility_Digiclone::OnDigicloneDead() {
}





bool UOakActionAbility_Digiclone::IsSafeToSwapPlayerWithClone_Implementation() const {
    return false;
}

bool UOakActionAbility_Digiclone::HasDigicloneMod(EDigiCloneModType InModType) const {
    return false;
}

float UOakActionAbility_Digiclone::GetSwapCooldownPercent() const {
    return 0.0f;
}


float UOakActionAbility_Digiclone::GetCloneRespawnCooldownPercent() const {
    return 0.0f;
}

void UOakActionAbility_Digiclone::DoCloneSwap() {
}




void UOakActionAbility_Digiclone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UOakActionAbility_Digiclone, DigicloneCooldownPoolRef);
    DOREPLIFETIME(UOakActionAbility_Digiclone, SwapPlacesCooldownPoolRef);
    DOREPLIFETIME(UOakActionAbility_Digiclone, RuntimeMods);
    DOREPLIFETIME(UOakActionAbility_Digiclone, CurrentDigiclone);
}

UOakActionAbility_Digiclone::UOakActionAbility_Digiclone() {
    this->DigicloneCooldownPoolData = NULL;
    this->SwapPlacesCooldownPoolData = NULL;
    this->DigicloneSwapRetryCount = 3;
    this->CurrentDigiclone = NULL;
}

