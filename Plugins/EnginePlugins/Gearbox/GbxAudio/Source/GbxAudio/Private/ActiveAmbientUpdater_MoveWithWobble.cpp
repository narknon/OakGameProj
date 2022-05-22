#include "ActiveAmbientUpdater_MoveWithWobble.h"

UActiveAmbientUpdater_MoveWithWobble::UActiveAmbientUpdater_MoveWithWobble() {
    this->DirectionUpdateFrequency = 0.20f;
    this->DirectionUpdateCone = 0.25f;
}

