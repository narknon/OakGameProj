#include "CharacterVocalLoopImplementation.h"

FCharacterVocalLoopImplementation::FCharacterVocalLoopImplementation() {
    this->bOriginator = false;
    this->bPainLoop = false;
    this->bOverrideConditions = false;
    this->Condition = NULL;
    this->bPlayOnce = false;
    this->StopTryingToRunAfterXSeconds = 0.00f;
    this->WhileCondition = NULL;
    this->bOverrideAudio = false;
    this->StartEvent = NULL;
    this->StopEvent = NULL;
}

