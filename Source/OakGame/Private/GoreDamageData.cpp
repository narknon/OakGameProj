#include "GoreDamageData.h"

class AActor;

void UGoreDamageData::GenerateGore(AActor* Actor, FGoreSelectionResults& Results, FName StumpSocketOverride, FName LimbSocketOverride) const {
}

UGoreDamageData::UGoreDamageData() {
    this->bIncludeChildBones = true;
    this->bTriggerOnlyOnDeath = true;
    this->bTriggeredByAoEDamage = true;
    this->bOverrideTriggerThreshold = false;
    this->TriggerThreshold = 0.10f;
    this->GoreRegionType = EGoreRegionType::Head;
    this->bOverwriteStumpInstancedMaterialParameters = false;
    this->bOverwriteLimbInstancedMaterialParameters = false;
    this->bInheritStumpMaterialParameters = true;
    this->InheritStumpMaterialParametersMethod = EMaterialParameterCopyMethod::CopyAllButSelfInstanced;
    this->bInheritLimbMaterialParameters = true;
    this->InheritLimbMaterialParametersMethod = EMaterialParameterCopyMethod::CopyAllButInstanced;
    this->bOverrideSourceMaterialIndex = false;
    this->SourceMaterialIndex = 0;
    this->bStumpReceivesDecals = false;
    this->DeathHitReactionOverride = NULL;
    this->StumpSound = NULL;
    this->StumpMaterialOverride = NULL;
    this->LimbActorClass = NULL;
    this->LimbMaterialOverride = NULL;
    this->bScaleLimbToStump = false;
    this->LimbScale = 1.00f;
    this->LimbMassScale = 1.00f;
    this->bDisableDialog = false;
    this->GoreDialogEvent = NULL;
}

