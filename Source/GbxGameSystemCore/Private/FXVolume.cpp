#include "FXVolume.h"

class UPrimitiveComponent;
class AActor;

void AFXVolume::OnActorLeftVolume(UPrimitiveComponent* OverlappedComponent, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) {
}

void AFXVolume::OnActorEnteredVolume(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& OverlapInfo) {
}

AFXVolume::AFXVolume() {
    this->ParticleSystem = NULL;
    this->ParticleDepth = 100.00f;
    this->bDepthPriorityWorld = true;
}

