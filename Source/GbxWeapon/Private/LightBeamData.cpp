#include "LightBeamData.h"
#include "LightBeam.h"

class AActor;

float ULightBeamData::UpdateTarget_Implementation(ULightBeam* Beam) const {
    return 0.0f;
}

bool ULightBeamData::CanLockOn_Implementation(ULightBeam* Beam, AActor* TargetActor) const {
    return false;
}

ULightBeamData::ULightBeamData() {
    this->BeamClass = ULightBeam::StaticClass();
    this->LifeTime = 0.00f;
    this->BeamFX = NULL;
    this->BeamFXCollection = NULL;
    this->ViewerBeamFX = NULL;
    this->ViewerBeamFXCollection = NULL;
    this->LoopingImpactAudio = NULL;
    this->AudioFXCollection = NULL;
    this->SourceTangentStrengthOverDistance = 1.50f;
    this->TargetTangentStrengthOverDistance = 0.25f;
    this->ExplosionData = NULL;
    this->ImpactData = NULL;
    this->ImpactFXFrequency = 0.80f;
    this->bShowPenetrationImpacts = true;
    this->bNoImpactDecals = true;
    this->TraceChannel = ECC_GameTraceChannel2;
    this->CollisionRadius = 0.00f;
    this->TraceInterval = 0.05f;
    this->NumTraceSteps = 6;
    this->MaxLength = 7500.00f;
    this->StartLength = 0.00f;
    this->GrowSpeed = 0.00f;
    this->bGrowOverTime = false;
    this->bSetTeamCollision = true;
    this->bIgnoreCollisionWithInstigatorTeam = false;
    this->bPenetratesTargetables = false;
    this->bPenetratesWorld = false;
    this->bCanTriggerBulletDodges = true;
    this->LockType = ELightBeamLock::LockOn;
    this->bCanAcquireLock = false;
    this->bAlignToLockedTarget = false;
    this->bCanLockOntoFriendlies = false;
    this->bWorldCollisionBreaksLock = true;
    this->DamageInterval = 0.20f;
    this->bDamageDirectTargetOnce = false;
    this->DamageData = NULL;
    this->bEnableDamageProxy = false;
    this->DamageProxyRadius = 0.00f;
    this->DamageProxyTraceChannel = ECC_GameTraceChannel3;
    this->bScaleDamageProxyRadiusByCurve = true;
    this->bDisableDragWhenLocked = true;
    this->DragSpeed = 0.00f;
    this->MaxDragRadius = 0.00f;
    this->bSpreadWaveformIsAngle = true;
    this->SpreadWaveformTimeScale = 1.00f;
    this->LockOnSpreadScale = 0.00f;
    this->bApplyAccuracyToSpread = false;
    this->MaxChains = 0;
    this->MaxChainDepth = 1;
    this->ChainBeamData = NULL;
    this->ChainTargetsQuery = NULL;
    this->ChainTargetsQueryMaxRangeParam = TEXT("MaxChainDistance");
    this->ChainDelay = 1.00f;
    this->ChainInterval = 0.50f;
    this->MaxChainDistance = 4000.00f;
    this->ChainBreakDistance = 0.00f;
    this->NetUpdateTime = 1.00f;
}

