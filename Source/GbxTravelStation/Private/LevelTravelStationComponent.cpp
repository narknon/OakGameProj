#include "LevelTravelStationComponent.h"

class ULevelTravelStationData;
class AController;

ULevelTravelStationData* ULevelTravelStationComponent::GetLevelTravelStationData() const {
    return NULL;
}

bool ULevelTravelStationComponent::ActivateLevelTravel(AController* ActivatingController) {
    return false;
}

ULevelTravelStationComponent::ULevelTravelStationComponent() {
    this->LevelTravelData = NULL;
    this->TextRenderEvalRate = 5.00f;
}

