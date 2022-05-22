#include "GbxAnimStateManager_Cover.h"

void UGbxAnimStateManager_Cover::Owner_PostBeginPlay() {
}

UGbxAnimStateManager_Cover::UGbxAnimStateManager_Cover() {
    this->Type = ECoverUserAnimState::None;
    this->Style = NULL;
    this->TransitionTable = NULL;
    this->CoverUser = NULL;
    this->GbxCharAnimInstance = NULL;
    this->GbxCharMoveComponent = NULL;
    this->AnimSequence = NULL;
}

