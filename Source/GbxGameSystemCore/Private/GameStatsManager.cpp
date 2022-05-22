#include "GameStatsManager.h"

class AActor;
class UGameStatData;

void AGameStatsManager::UpdateStat(AActor* StatContext, UGameStatData* GameStat, int32 NewValue) {
}

void AGameStatsManager::IncrementStat(AActor* StatContext, UGameStatData* GameStat, int32 IncrementAmount) {
}

int32 AGameStatsManager::GetStatValue(AActor* StatContext, UGameStatData* GameStat) {
    return 0;
}

AGameStatsManager::AGameStatsManager() {
}

