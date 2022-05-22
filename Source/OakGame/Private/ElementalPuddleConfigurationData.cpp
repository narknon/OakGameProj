#include "ElementalPuddleConfigurationData.h"

UElementalPuddleConfigurationData::UElementalPuddleConfigurationData() {
    this->ElementalInteractionConfiguration = NULL;
    this->ElementalEffectSizeScale = 1.00f;
    this->PuddleDecalMaterial = NULL;
    this->PuddleDecalMaterial_Ripples = NULL;
    this->PuddleMeshMaterial = NULL;
    this->PuddleMeshMaterial_Ripples = NULL;
    this->LargeLiquidBodySurfaceMaterial = NULL;
    this->NormalStrength = 0.50f;
    this->MovementSpeed = 0.50f;
    this->DepthFade = 10.00f;
    this->NaturalStateAudioLoop = NULL;
    this->ParticleSystem = NULL;
    this->ParticleSystemSurfaceAreaScalar = 0.00f;
    this->NaturalStatePhysMat = NULL;
}

