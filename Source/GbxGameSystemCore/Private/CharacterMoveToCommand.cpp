#include "CharacterMoveToCommand.h"

FCharacterMoveToCommand::FCharacterMoveToCommand() {
    this->Duration = 0.00f;
    this->bContinuouslyUpdate = false;
    this->bEnforceMaxSpeed = false;
    this->bEnforceMaxSpeedOnEnding = false;
    this->bMoveZAxis = false;
}

