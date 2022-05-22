#include "CarnivoraTrackBuilder.h"
#include "Components/SplineComponent.h"

ACarnivoraTrackBuilder::ACarnivoraTrackBuilder() {
    this->BuilderSpline = CreateDefaultSubobject<USplineComponent>(TEXT("BuilderSpline"));
    this->BodySpline = CreateDefaultSubobject<USplineComponent>(TEXT("BodySpline"));
    this->TreadHeightOffset = 70.00f;
    this->LeftTreadSpline = CreateDefaultSubobject<USplineComponent>(TEXT("LeftTreadSpline"));
    this->RightTreadSpline = CreateDefaultSubobject<USplineComponent>(TEXT("RightTreadSpline"));
    this->TreadSideOffset = 4000.00f;
    this->TreadTraceRadius = 200.00f;
    this->BodyTraceRadius = 2000.00f;
    this->TraceHeightOffset = 20000.00f;
    this->TraceSpacing = 1000.00f;
}

