#include "WantedPoster.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

class UPrimitiveComponent;
class AActor;
class UMission;

void AWantedPoster::OnRep_bHologramActive() {
}

void AWantedPoster::OnNearbyPlayerEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AWantedPoster::OnNearbyPlayerBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}


void AWantedPoster::HandlePlayerActorDestroyed(AActor* Actor) {
}

TSubclassOf<UMission> AWantedPoster::GetWantedPosterMission() const {
    return NULL;
}

void AWantedPoster::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AWantedPoster, bHologramActive);
}

AWantedPoster::AWantedPoster() {
    this->NativeDefinition = NULL;
    this->CharacterMeshComponentName = TEXT("CharacterMesh");
    this->PosterMeshComponentName = TEXT("PosterMesh");
    this->NearbyPlayerOverlapComponentName = TEXT("TouchBox");
    this->PosterMeshComponent = NULL;
    this->CharacterMeshComponent = NULL;
    this->NearbyPlayerOverlapComponent = NULL;
    this->MissionDirectorComponent = NULL;
    this->MissionObserverComponent = NULL;
    this->bHologramActive = false;
}

