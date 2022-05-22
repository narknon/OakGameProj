#include "ExtendedTraceInfo.h"

FExtendedTraceInfo::FExtendedTraceInfo() {
    this->bDoArcTrace = false;
    this->NumSegments = 0;
    this->Context = NULL;
    this->MultipleContextRequirement = EUberTraceMultiTraceRequirement::AtLeastOneMustPassTest;
    this->MaxScoreIfFails = 0.00f;
    this->MinScoreIfSucceeds = 0.00f;
    this->bStopIfSucceeds = false;
    this->bStopIfFails = false;
}

