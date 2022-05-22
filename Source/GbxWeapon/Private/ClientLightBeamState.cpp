#include "ClientLightBeamState.h"

FClientLightBeamState::FClientLightBeamState() {
    this->CreationID = 0;
    this->DataBlueprint = NULL;
    this->Instigator = NULL;
    this->DamageCauser = NULL;
    this->ImpactDataOverride = NULL;
    this->Spread = 0.00f;
    this->Flags = 0;
    this->BeamFXOverride = NULL;
    this->ViewerBeamFXOverride = NULL;
    this->BeamImpactAudioOverride = NULL;
    this->LifetimeOverride = 0.00f;
    this->Damage = 0.00f;
    this->DamageType = NULL;
    this->DamageSource = NULL;
    this->DamageRadius = 0.00f;
    this->DamageRampCurve = NULL;
    this->DamageRampScale = 0.00f;
    this->ImpactForce = 0.00f;
}

