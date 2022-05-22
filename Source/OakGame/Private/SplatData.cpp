#include "SplatData.h"

USplatData::USplatData() {
    this->bUseGroundingDecal = true;
    this->bUseSplatDecalMaterialArray = false;
    this->bOverrideDamageData = false;
    this->bForceDamageToPlayerControlled = false;
    this->bOverrideDamageAmount = false;
    this->bUseGroundingDecalDeathDelay = true;
    this->BirthDuration = 0.50f;
    this->BirthOpacity = 1.00f;
    this->BirthRadius = 100.00f;
    this->BirthEffect = NULL;
    this->BirthAudio = NULL;
    this->GroundingDecalMaterial = NULL;
    this->SplatDecalMaterial = NULL;
    this->Effect = NULL;
    this->Duration = 4.00f;
    this->Opacity = 1.00f;
    this->Radius = 200.00f;
    this->BonusDecalScalePercent = 0.20f;
    this->DamageDataOverride = NULL;
    this->DamageScalar = 0.10f;
    this->ElementalInteraction = NULL;
    this->DeathDuration = 0.50f;
    this->DeathOpacity = 0.00f;
    this->DeathRadius = 190.00f;
    this->DeathAudio = NULL;
    this->GroundingDecalDeathDelay = 2.00f;
}

