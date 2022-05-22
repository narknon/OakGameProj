#include "GameResourcePoolData.h"

UGameResourcePoolData::UGameResourcePoolData() {
    this->Resource = NULL;
    this->BaseMinValue = 0.00f;
    this->StartingValue = 0.00f;
    this->StartWithMinValue = false;
    this->StartWithMaxValue = false;
    this->bUpdateCurrentValueOnExtremaChange = true;
    this->MinimumReservedValue = 1.00f;
    this->bCheckFilledAgainstOldValues = false;
    this->BaseConsumptionRate = 0.00f;
    this->BaseActiveRegenerationRate = 0.00f;
    this->BasePassiveRegenerationRate = 0.00f;
    this->BasePassivePercentRegenerationRate = 0.00f;
    this->BasePassiveMissingPercentRegenerationRate = 0.00f;
    this->BaseOnIdleRegenerationRate = 0.00f;
    this->BaseOnIdleRegenerationDelay = 0.00f;
    this->BaseOnDepletedRegenerationDelay = 0.00f;
    this->RecentImpulseTimer = 0.00f;
    this->bOnlyReplicateToOwner = false;
    this->ReplicationType = GRPRT_None;
}

