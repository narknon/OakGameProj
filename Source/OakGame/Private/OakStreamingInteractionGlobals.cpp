#include "OakStreamingInteractionGlobals.h"

UOakStreamingInteractionGlobals::UOakStreamingInteractionGlobals() {
    this->TimeBetweenCharacterProfileUpdateSteps = 2.00f;
    this->AddedTimeForUpdateStepsDuringEvents = 2.00f;
    this->MaxInventoryItemsPerUpdate = 15;
    this->PoolResultFormat = FText::FromString(TEXT("({COUNT} vote(s) / {TOTAL_PERCENT}%)"));
    this->DirectorTriggeredEventsCheckTimer = 10.00f;
    this->MoxxiBuffDurationSeconds = 600.00f;
    this->bForceMoxxiEventDisabled = false;
}

