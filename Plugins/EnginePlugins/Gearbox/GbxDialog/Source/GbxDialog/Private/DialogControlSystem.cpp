#include "DialogControlSystem.h"

UDialogControlSystem::UDialogControlSystem() {
    this->LookupSystem = NULL;
    this->Blackboard = NULL;
    this->Settings = NULL;
    this->bFakePauseMode = false;
    this->bInCinematicMode = false;
    this->PauseModeLastFrameTime = 0.00f;
}

