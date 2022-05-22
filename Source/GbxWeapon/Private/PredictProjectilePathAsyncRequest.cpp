#include "PredictProjectilePathAsyncRequest.h"

FPredictProjectilePathAsyncRequest::FPredictProjectilePathAsyncRequest() {
    this->TraceMode = EGbxTraceAsyncMode::Channel;
    this->ObjectType = ObjectTypeQuery1;
}

