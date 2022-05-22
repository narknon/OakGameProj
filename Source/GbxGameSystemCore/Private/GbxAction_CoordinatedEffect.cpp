#include "GbxAction_CoordinatedEffect.h"

void UGbxAction_CoordinatedEffect::SetConstantMaterialVectorParamValue(FName ParamName, const FLinearColor& Color) {
}

UGbxAction_CoordinatedEffect::UGbxAction_CoordinatedEffect() {
    this->bInfiniteDuration = false;
    this->bLoop = false;
    this->bCensored = false;
    this->bDestroyActorOnEnd = false;
    this->bUnhideActorOnBegin = false;
    this->bHideActorOnEnd = false;
    this->Duration = 1.00f;
    this->NextEffect = NULL;
    this->OverrideMaterial = NULL;
    this->MaskMaterial = NULL;
    this->GlowMaterial = NULL;
    this->InheritMaterialParametersMethod = EMaterialParameterCopyMethod::CopyAllButInstanced;
    this->bInheritAllMaterialParameters = false;
    this->bOverwriteInstancedMaterialParameters = false;
    this->bApplyToTranslucentMaterials = true;
    this->bPermanentMaterialOverride = false;
    this->bAlwaysRestoreMaterialParametersAtEnd = false;
    this->bApplyMaterialParametersToBothOverrideAndMaskGlow = false;
    this->ParticleSpeedMultiplier = 1.00f;
    this->OwnedParticleAction = ECoordinatedOwnedParticleAction::None;
    this->bAlwaysRestoreParticleParametersAtEnd = true;
    this->bHideOwnedParticles = false;
}

