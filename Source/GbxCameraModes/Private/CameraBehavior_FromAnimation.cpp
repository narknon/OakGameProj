#include "CameraBehavior_FromAnimation.h"

UCameraBehavior_FromAnimation::UCameraBehavior_FromAnimation() {
    this->bSetLocation = true;
    this->bSetRotation = true;
    this->SocketName = TEXT("Camera");
}

