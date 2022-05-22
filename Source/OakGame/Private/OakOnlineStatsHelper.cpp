#include "OakOnlineStatsHelper.h"

class AActor;
class UGameStatData;

void UOakOnlineStatsHelper::OnStatIncrement(AActor* StatContext, UGameStatData* StatId, int32 Amount) {
}

UOakOnlineStatsHelper::UOakOnlineStatsHelper() {
    this->PlaytimeStat = NULL;
    this->SlotMachineWinsStat = NULL;
    this->GuardianRankStat = NULL;
    this->BadassesKilledStat = NULL;
}

