#include "GbxLevelSequenceThrottleLibrary.h"

class AGbxLevelSequenceActor;

void UGbxLevelSequenceThrottleLibrary::UnlimitSequenceActor(AGbxLevelSequenceActor* Player) {
}

bool UGbxLevelSequenceThrottleLibrary::ShouldLimitSequenceGroup(const FName InGroup) {
    return false;
}

void UGbxLevelSequenceThrottleLibrary::LimitSequenceActor(AGbxLevelSequenceActor* Player, const FName Group) {
}

void UGbxLevelSequenceThrottleLibrary::ClearLimitGroup(const FName Group) {
}

UGbxLevelSequenceThrottleLibrary::UGbxLevelSequenceThrottleLibrary() {
}

