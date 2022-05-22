#include "GameStatsComponent.h"

class UGameStatData;

void UGameStatsComponent::UpdateStat(UGameStatData* GameStat, int32 NewValue) {
}

void UGameStatsComponent::IncrementStat(UGameStatData* GameStat, int32 Amount) {
}

int32 UGameStatsComponent::GetStatValue(UGameStatData* GameStat) {
    return 0;
}

TArray<FGameStat> UGameStatsComponent::GetGameStats() const {
    return TArray<FGameStat>();
}

UGameStatsComponent::UGameStatsComponent() {
}

