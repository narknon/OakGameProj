#include "CurrentDialogPerformanceInfo.h"

FCurrentDialogPerformanceInfo::FCurrentDialogPerformanceInfo() {
    this->DialogThreadID = 0;
    this->DialogSequenceID = 0;
    this->Performance = NULL;
    this->bForcingOwnerRelevantForEcho = false;
}

