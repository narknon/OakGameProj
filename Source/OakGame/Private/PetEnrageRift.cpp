#include "PetEnrageRift.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class UCinematicModeData;
class AActor;


void APetEnrageRift::StartPetSummon() {
}

void APetEnrageRift::OnRep_PetActor() {
}






void APetEnrageRift::OnCinematicModeChanged(UCinematicModeData* CinematicMode) {
}

void APetEnrageRift::OnActorExitedSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void APetEnrageRift::OnActorEnteredSphere(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void APetEnrageRift::NotifyServerWaitingOnTeleport_Implementation() {
}

void APetEnrageRift::NotifyClientTeleport_Implementation() {
}
bool APetEnrageRift::NotifyClientTeleport_Validate() {
    return true;
}


void APetEnrageRift::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APetEnrageRift, PetActor);
}

APetEnrageRift::APetEnrageRift() {
    this->BeastmasterComponent = NULL;
    this->PetActor = NULL;
    this->CachedTeamComponent = NULL;
}

