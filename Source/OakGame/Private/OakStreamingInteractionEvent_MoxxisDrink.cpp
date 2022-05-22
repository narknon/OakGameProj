#include "OakStreamingInteractionEvent_MoxxisDrink.h"

class UStreamingPoolActionInfo;

FString UOakStreamingInteractionEvent_MoxxisDrink::GetSelectionTextByClass(TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass, int32 Rank, int32 Tier, int32 Percent) {
    return TEXT("");
}

void UOakStreamingInteractionEvent_MoxxisDrink::FakeSpawnMoxxisDrink() {
}

void UOakStreamingInteractionEvent_MoxxisDrink::FakeMoxxisDrinkAction(TSoftClassPtr<UStreamingPoolActionInfo> PollActionClass, float ActionValue) {
}

UOakStreamingInteractionEvent_MoxxisDrink::UOakStreamingInteractionEvent_MoxxisDrink() {
    this->MaxSpawnAttempt = 5;
    this->DigistructDuration = 15.00f;
    this->MoxxiEventDataTable = NULL;
    this->MaxEventDuration = 60.00f;
    this->TimeBetweenEventInfoUpdate = 2.00f;
    this->MaximumTimeBetweenDonations = 0.00f;
    this->DefaultTimeBetweenDonations = 30.00f;
    this->EventHardCooldownDuration = 200.00f;
    this->StreamerBoosterData = NULL;
    this->PollTimerDuration = 20.00f;
    this->MaxItemInPoll = 4;
    this->DrinkClassRef = NULL;
    this->MoxxisChestActor = NULL;
    this->NumberOfDonations = 0;
    this->DonationTotalBits = 0;
    this->EndOfDonationTimer = 0.00f;
    this->TierDuration = 0.00f;
    this->TierStartedTimestampGame = 0;
    this->HardEventCooldownTimer = 0.00f;
    this->bDonationDone = false;
}

