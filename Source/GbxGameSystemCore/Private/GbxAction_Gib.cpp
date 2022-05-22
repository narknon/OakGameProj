#include "GbxAction_Gib.h"
#include "GameFramework/Actor.h"

UGbxAction_Gib::UGbxAction_Gib() {
    this->MaxGibCount = 0;
    this->GibMinScale = 1.00f;
    this->GibMaxScale = 1.00f;
    this->GibSpawnPattern = NULL;
    this->GibMassScale = 1.00f;
    this->GibActorClass = AActor::StaticClass();
    this->GibEffectScale = 1.00f;
    this->GibParticle = NULL;
    this->GibSound = NULL;
}

