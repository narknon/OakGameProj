#include "OakStreamingInteractionEvent.h"

void UOakStreamingInteractionEvent::EndEventFallback() {
}

UOakStreamingInteractionEvent::UOakStreamingInteractionEvent() {
    this->EVENTTYPE = TEXT("EventType");
    this->EventTriggerType = EEventTriggerType::StreamingEvent_DirectorTriggered;
    this->EventCooldownTime = 0.00f;
    this->FallbackTimerDuration = 0.00f;
    this->FallbackTimer = 0.00f;
    this->InitializeTimestamp = 0;
    this->LastActivationTimestamp = 0;
    this->EventStartedTimestampEBS = 0;
    this->bBackendAcknowledged = false;
    this->EventID = 0;
    this->EndEventReason = EEndEventReasons::Unknown;
    this->StreamingMgr = NULL;
}

