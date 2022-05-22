#include "GbxProgressBarInterpolator.h"

FGbxProgressBarInterpolator::FGbxProgressBarInterpolator() {
    this->Delay = 0.00f;
    this->Duration = 0.00f;
    this->StartValue = 0.00f;
    this->CurrentValue = 0.00f;
    this->EndValue = 0.00f;
    this->ElapsedTime = 0.00f;
    this->DeltaEndOverride = 0.00f;
}

