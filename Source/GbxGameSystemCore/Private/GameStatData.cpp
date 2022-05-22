#include "GameStatData.h"

UGameStatData::UGameStatData() {
    this->DefaultValue = 0;
    this->MinValue = 0;
    this->bHasMinValue = false;
    this->MaxValue = 0;
    this->bHasMaxValue = false;
    this->bProfileStat = false;
    this->bPartyStat = false;
}

