#include "AmbientSoundSpline.h"
#include "Components/SplineComponent.h"

AAmbientSoundSpline::AAmbientSoundSpline() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent0"));
    this->bForceEmitterUniformScale = false;
}

