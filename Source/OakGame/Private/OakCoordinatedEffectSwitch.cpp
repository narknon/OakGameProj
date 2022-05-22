#include "OakCoordinatedEffectSwitch.h"

FOakCoordinatedEffectSwitch::FOakCoordinatedEffectSwitch() {
    this->Enum = NULL;
    this->bNativeEnum = false;
    this->InitialState = 0;
    this->CurrentState = 0;
    this->Owner = NULL;
    this->ActionComp = NULL;
    this->ReplicatedState = 0;
}

