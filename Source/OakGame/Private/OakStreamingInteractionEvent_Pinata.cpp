#include "OakStreamingInteractionEvent_Pinata.h"

class AActor;

void UOakStreamingInteractionEvent_Pinata::SetPinata(AActor* NewPinataActor) {
}

void UOakStreamingInteractionEvent_Pinata::HandleLevelChanged(const int32 OldLevel, const int32 NewLevel) {
}

UOakStreamingInteractionEvent_Pinata::UOakStreamingInteractionEvent_Pinata() {
    this->MaxSpawnAttempt = 5;
    this->MaxEventDuration = 60.00f;
    this->PollTimerDuration = 15.00f;
    this->MaxItemInPoll = 4;
    this->PinataClassRef = NULL;
    this->PinataActor = NULL;
}

