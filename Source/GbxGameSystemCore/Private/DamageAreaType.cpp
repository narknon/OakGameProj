#include "DamageAreaType.h"

UDamageAreaType::UDamageAreaType() {
    this->MaxTargets = 1;
    this->bUseMaxTargets = false;
    this->bDoDirectDamageToImpactedActor = false;
    this->bIgnoreWorldGeometry = false;
    this->bTryDirectTraceFirst = true;
    this->bSkipBackupImpactTrace = false;
    this->bForceZeroPitch = false;
    this->bZeroPitchBeforeApplyingHitStartOffset = true;
    this->bForceZeroRoll = false;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->bTraceToGround = false;
    this->TraceToGroundDownwardDistance = 100.00f;
    this->TraceToGroundStartHeightOffset = 75.00f;
    this->TraceToGroundHitOffset = 5.00f;
    this->OverlapFilter = EDamageAreaOverlapFilterType::AllDynamicObjects;
}

