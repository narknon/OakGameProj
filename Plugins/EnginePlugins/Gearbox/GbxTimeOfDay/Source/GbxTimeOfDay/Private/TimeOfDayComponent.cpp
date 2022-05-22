#include "TimeOfDayComponent.h"
#include "Net/UnrealNetwork.h"

void UTimeOfDayComponent::SetUseCinematicTimeOfDay(bool InUseCinematicTimeOfDay) {
}

void UTimeOfDayComponent::SetCinematicTimeOfDay(float InCinematicTimeOfDay) {
}

void UTimeOfDayComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTimeOfDayComponent, TimeOfDay);
    DOREPLIFETIME(UTimeOfDayComponent, CycleCount);
    DOREPLIFETIME(UTimeOfDayComponent, CurrentLayerName);
    DOREPLIFETIME(UTimeOfDayComponent, TransitionTimeLeft);
    DOREPLIFETIME(UTimeOfDayComponent, bShouldTick);
}

UTimeOfDayComponent::UTimeOfDayComponent() {
    this->TimeOfDayCycleInstance = NULL;
    this->TimeOfDay = 0.00f;
    this->CycleCount = 1;
    this->TransitionTimeLeft = 0.00f;
    this->LastEvaluatedTime = 0.00f;
    this->CinematicTimeOfDay = 0.00f;
    this->bUseCinematicTimeOfDay = false;
    this->bShouldTick = true;
}

