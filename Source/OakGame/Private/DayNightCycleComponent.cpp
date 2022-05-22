#include "DayNightCycleComponent.h"

float UDayNightCycleComponent::GetTimeOfDay() {
    return 0.0f;
}

UDayNightCycleComponent::UDayNightCycleComponent() {
    this->DayBeginTime = 0.00f;
    this->DayEndTime = 0.00f;
}

