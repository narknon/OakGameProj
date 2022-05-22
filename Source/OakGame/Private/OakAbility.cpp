#include "OakAbility.h"

class UOakAbilityTimerData;

void UOakAbility::StopTimer(UOakAbilityTimerData* Timer) {
}

void UOakAbility::StopAbilityTimer(UOakAbilityTimerData* Timer) {
}

void UOakAbility::StartTimer(const FOakAbilityTimerSpec& InSpec) {
}

void UOakAbility::StartAbilityTimer(const FOakAbilityTimerSpec& InSpec) {
}

void UOakAbility::ResetTimer(UOakAbilityTimerData* Timer) {
}

void UOakAbility::ResetAbilityTimer(UOakAbilityTimerData* Timer) {
}






bool UOakAbility::IsTimerActive(UOakAbilityTimerData* TimerData) const {
    return false;
}

bool UOakAbility::IsAbilityTimerActive(UOakAbilityTimerData* TimerData) const {
    return false;
}

float UOakAbility::GetAbilityTimerValue(UOakAbilityTimerData* Timer) const {
    return 0.0f;
}

UOakAbility::UOakAbility() {
}

