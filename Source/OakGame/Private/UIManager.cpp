#include "UIManager.h"

class UTravelStationData;

FMessageHandle UUIManager::DisplaySocialMessage(const FString& PlayerDisplayName, const int32 Level, const FText& ClassDisplayName, const FText& Description, const FText& CommandText) {
    return FMessageHandle{};
}

void UUIManager::AutoUpdateTravelMessage(UTravelStationData* DestinationTravelStation, int32 RemainingTime, ETravelStatus CurrentStatus) {
}

UUIManager::UUIManager() {
    this->UIGlobals = NULL;
    this->PlayerOwner = NULL;
    this->OnlineMessageInputComponent = NULL;
    this->TravelMessageManager = NULL;
    this->OnlineMessageManager = NULL;
    this->SocialEventMessageManager = NULL;
}

