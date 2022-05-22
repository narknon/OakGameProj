#include "CameraBehavior.h"

class UCameraState;

void UCameraBehavior::Update_Implementation(float DeltaTime, UCameraState* State) {
}

void UCameraBehavior::Start_Implementation(UCameraState* State) {
}

void UCameraBehavior::End_Implementation(UCameraState* State) {
}

UCameraBehavior::UCameraBehavior() {
    this->bEnabled = true;
    this->bUpdatePreViewTarget = false;
    this->bUpdateForRemoteClient = false;
}

