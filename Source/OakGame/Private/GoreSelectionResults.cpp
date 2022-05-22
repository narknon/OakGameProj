#include "GoreSelectionResults.h"

FGoreSelectionResults::FGoreSelectionResults() {
    this->StumpMesh = NULL;
    this->StumpParticles = NULL;
    this->StumpMaterialOverride = NULL;
    this->StumpDecal = NULL;
    this->StumpSound = NULL;
    this->bStumpReceivesDecal = false;
    this->bInheritStumpMaterialParameters = false;
    this->InheritStumpMaterialParametersMethod = EMaterialParameterCopyMethod::CopyAllButInstanced;
    this->bInheritLimbMaterialParameters = false;
    this->InheritLimbMaterialParametersMethod = EMaterialParameterCopyMethod::CopyAllButInstanced;
    this->LimbMesh = NULL;
    this->LimbParticles = NULL;
    this->LimbActorClass = NULL;
    this->LimbMaterialOverride = NULL;
    this->LimbForce = 0.00f;
    this->bScaleLimbToStump = false;
    this->LimbScale = 0.00f;
    this->LimbMassScale = 0.00f;
    this->SourceMaterialIndex = 0;
}

