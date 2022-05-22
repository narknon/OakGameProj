#include "OakCharacterSoundData.h"

UOakCharacterSoundData::UOakCharacterSoundData() {
    this->bOverrideFirePainLoop = false;
    this->FirePainLoop = NULL;
    this->FirePainLoopStop = NULL;
    this->bOverrideCorrosivePainLoop = false;
    this->CorrosivePainLoop = NULL;
    this->CorrosivePainLoopStop = NULL;
    this->bOverrideShockPainLoop = false;
    this->ShockPainLoop = NULL;
    this->ShockPainLoopStop = NULL;
    this->bOverrideSlagPainLoop = false;
    this->SlagPainLoop = NULL;
    this->SlagPainLoopStop = NULL;
    this->bOverrideCryoPainLoop = false;
    this->CryoPainLoop = NULL;
    this->CryoPainLoopStop = NULL;
    this->bOverrideRadiationPainLoop = false;
    this->RadiationPainLoop = NULL;
    this->RadiationPainLoopStop = NULL;
}

