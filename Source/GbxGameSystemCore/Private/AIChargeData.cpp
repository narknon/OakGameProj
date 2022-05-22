#include "AIChargeData.h"

UAIChargeData::UAIChargeData() {
    this->StartAction = NULL;
    this->MissAction = NULL;
    this->StrikeAction = NULL;
    this->HitWallAction = NULL;
    this->ReachCliffAction = NULL;
    this->StopForFriendlyAction = NULL;
    this->bUseAnims = false;
    this->ChargeAction = NULL;
    this->StrikeAngle = 25.00f;
    this->StrikeDistance = 256.00f;
    this->MaxTravelDistance = 0.00f;
    this->MissDistance = 512.00f;
    this->HitWallRadiusPct = 1.25f;
    this->SlowStopTime = 0.10f;
    this->SlowStopSpeedPercent = 0.10f;
    this->HitReactionFriendly = NULL;
    this->HitReactionUnfriendly = NULL;
    this->bCauseHitReaction = true;
    this->StopForFriendlyOfRelativeSize = ERelativeSizeCharge::None;
    this->StopForFriendlyDistance = 500.00f;
    this->ChargeStance = NULL;
    this->SpeedOverrideType = EChargeCurveType::Relative;
    this->RotationOverrideType = EChargeCurveType::Relative;
    this->bRotationOverTime = true;
    this->SpeedCurve = NULL;
    this->RotationCurve = NULL;
    this->HitReactionForce = 10.00f;
}

