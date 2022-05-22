#include "GrenadeBehavior_PayloadSticky.h"

class UPrimitiveComponent;
class AActor;

void UGrenadeBehavior_PayloadSticky::StuckGrenadeUnoverlappedActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex) const {
}

void UGrenadeBehavior_PayloadSticky::StuckGrenadeOverlappedActor(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) const {
}




UGrenadeBehavior_PayloadSticky::UGrenadeBehavior_PayloadSticky() {
    this->StickyFuseTimer = 0.50f;
    this->MeshCollisionChannel = ECC_GameTraceChannel4;
    this->ProximityTriggerParticleTemplate = NULL;
    this->TriggerParticleSizePropertyName = TEXT("Diameter");
    this->ProximityMaxDuration = 4.00f;
    this->MinProximityRadius = 128.00f;
    this->MaxProximityRadius = 400.00f;
    this->TriggerCondition = NULL;
    this->StuckDamageData = NULL;
    this->StickToTargetAudioEvent = NULL;
    this->StickToWorldAudioEvent = NULL;
    this->StickyProximityTriggeredAudioEvent = NULL;
    this->StuckIdleAudioEvent = NULL;
}

