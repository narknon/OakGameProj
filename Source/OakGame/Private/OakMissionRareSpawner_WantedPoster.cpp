#include "OakMissionRareSpawner_WantedPoster.h"

class AActor;
class UGameStatData;

void AOakMissionRareSpawner_WantedPoster::OnStatChanged(AActor* StatContext, UGameStatData* InStatData, int32 Amount) {
}

AOakMissionRareSpawner_WantedPoster::AOakMissionRareSpawner_WantedPoster() {
    this->MissionClass = NULL;
    this->StatData = NULL;
}

