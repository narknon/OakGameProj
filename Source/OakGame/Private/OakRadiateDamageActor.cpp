#include "OakRadiateDamageActor.h"
#include "Templates/SubclassOf.h"

class UObject;
class AOakRadiateDamageActor;
class AActor;



bool AOakRadiateDamageActor::InitialSnapToGroundWouldFail(UObject* ContextObj, TSubclassOf<AOakRadiateDamageActor> Template, AActor* TransformActor, TEnumAsByte<ECollisionChannel> NewTraceChannel) {
    return false;
}

AOakRadiateDamageActor::AOakRadiateDamageActor() {
    this->DamageData = NULL;
    this->RadiateMethod = ERadiateMethod::Velocity;
    this->RadiateMovementType = ERadiateMovementType::FollowInitialDirection;
    this->TraceZOffset = 80.00f;
    this->TraceChannel = ECC_WorldStatic;
    this->bOnlyTraceStaticMobility = true;
    this->bUseContextRotation = false;
    this->EffectZOffset = 0.00f;
    this->ElementalPuddleSpawnData = NULL;
    this->SplatData = NULL;
}

