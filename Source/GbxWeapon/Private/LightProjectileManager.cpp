#include "LightProjectileManager.h"

class AActor;
class UParticleSystemComponent;

void ALightProjectileManager::ServerSendDebugProjectileImpact_Implementation(int32 ProjSyncID, AActor* HitActor, FName BoneName, uint16 ProjFlags) {
}

void ALightProjectileManager::OnParticleSystemFinished(UParticleSystemComponent* FinishedComponent) {
}

ALightProjectileManager::ALightProjectileManager() {
    this->MaxAsyncSpawnTime = 1.50f;
}

