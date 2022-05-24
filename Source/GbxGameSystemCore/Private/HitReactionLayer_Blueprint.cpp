#include "HitReactionLayer_Blueprint.h"

class UDamageComponent;
class UGbxDamageType;
class UDamageCauserComponent;
class UDamageSource;
class UHitReactionTag;
class UHitRegionData;

UHitReactionTag* UHitReactionLayer_Blueprint::EvaluateTag_Implementation(UDamageComponent* Receiver, UDamageCauserComponent* Causer, float DamageAmount, const UGbxDamageType* DamageType, const UDamageSource* DamageSource, UHitRegionData* HitRegion, float Force, UHitReactionTag* PreviousTag) const {
    return NULL;
}

UHitReactionLayer_Blueprint::UHitReactionLayer_Blueprint() {
}

