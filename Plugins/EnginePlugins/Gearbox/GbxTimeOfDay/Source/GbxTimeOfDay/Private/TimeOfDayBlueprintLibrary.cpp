#include "TimeOfDayBlueprintLibrary.h"

class UObject;

void UTimeOfDayBlueprintLibrary::TransitionUpOneLayer(UObject* WorldContextObject, float TransitionDuration) {
}

void UTimeOfDayBlueprintLibrary::TransitionToLayer(UObject* WorldContextObject, const FString& ToLayer, float TransitionDuration) {
}

void UTimeOfDayBlueprintLibrary::TransitionDownOneLayer(UObject* WorldContextObject, float TransitionDuration) {
}

void UTimeOfDayBlueprintLibrary::StartTimeOfDay(UObject* WorldContextObject) {
}

void UTimeOfDayBlueprintLibrary::SetTimeOfDay(UObject* WorldContextObject, float NewTimeOfDay) {
}

void UTimeOfDayBlueprintLibrary::PauseTimeOfDay(UObject* WorldContextObject) {
}

ETimeOfDayState UTimeOfDayBlueprintLibrary::GetTimeOfDayState(UObject* WorldContextObject) {
    return ETimeOfDayState::None;
}

float UTimeOfDayBlueprintLibrary::GetTimeOfDay(UObject* WorldContextObject) {
    return 0.0f;
}

void UTimeOfDayBlueprintLibrary::AddTimeOfDayListener(UObject* WorldContextObject, UObject* InListener) {
}

UTimeOfDayBlueprintLibrary::UTimeOfDayBlueprintLibrary() {
}

