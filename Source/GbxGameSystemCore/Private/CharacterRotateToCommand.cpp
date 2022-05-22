#include "CharacterRotateToCommand.h"

FCharacterRotateToCommand::FCharacterRotateToCommand() {
    this->TargetActor = NULL;
    this->Duration = 0.00f;
    this->bFreezeRotation = false;
    this->InterpSpeed = 0.00f;
    this->MaxYawRate = 0.00f;
    this->MaxPitchRate = 0.00f;
    this->bUseEasing = false;
}

