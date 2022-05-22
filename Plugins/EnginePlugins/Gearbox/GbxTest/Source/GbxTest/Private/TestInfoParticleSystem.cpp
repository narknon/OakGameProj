#include "TestInfoParticleSystem.h"

FTestInfoParticleSystem::FTestInfoParticleSystem() {
    this->FixedRelativeBoundsSize = 0.00f;
    this->UpdateTime = 0.00f;
    this->WarmupTime = 0.00f;
    this->LODDistanceCheckTime = 0.00f;
    this->TemplateCost = 0.00f;
    this->EmitterCount = 0;
    this->MinModuleCount = 0;
    this->MaxModuleCount = 0;
    this->LODCount = 0;
    this->AnimTrailDataCount = 0;
    this->GpuSpriteDataCount = 0;
    this->MeshDataCount = 0;
    this->RibbonOrBeamDataCount = 0;
    this->bUsesFixedRelativeBounds = false;
    this->bZAxisOrientedTowardsCamera = false;
    this->bAllEmittersHaveRequiredModules = false;
    this->bAllEmittersHaveLowestLOD = false;
    this->bKillFlagsNotSet = false;
}

