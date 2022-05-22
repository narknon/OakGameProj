#include "VehicleSpline.h"
#include "Components/SplineComponent.h"

AVehicleSpline::AVehicleSpline() {
    this->SplineComponent = CreateDefaultSubobject<USplineComponent>(TEXT("SplineComponent"));
    this->DropOffSpawner = NULL;
    this->PostDropOffExitSpline = NULL;
    this->ExitSequenceLeadInDistance = 0.00f;
    this->DescentLeadInDistance = 0.00f;
}

