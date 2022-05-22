#include "GrenadeBehavior_PayloadBlueprint.h"

class AGrenadeMod;
class AGrenade;

AGrenade* UGrenadeBehavior_PayloadBlueprint::SpawnChildGrenade(AGrenade* ParentGrenade, FTransform SpawnTransform) const {
    return NULL;
}

void UGrenadeBehavior_PayloadBlueprint::SetDelay(AGrenade* Grenade, AGrenadeMod* GrenadeMod, FPayloadInstanceData& InstanceData, float Delay, FName DelayName) const {
}













UGrenadeBehavior_PayloadBlueprint::UGrenadeBehavior_PayloadBlueprint() {
}

