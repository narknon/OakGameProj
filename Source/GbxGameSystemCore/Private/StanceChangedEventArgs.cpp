#include "StanceChangedEventArgs.h"

FStanceChangedEventArgs::FStanceChangedEventArgs() {
    this->PreviousLayer = EStanceStackLayer::Default;
    this->PreviousStanceType = NULL;
    this->PreviousStance = NULL;
    this->NextLayer = EStanceStackLayer::Default;
    this->NextStanceType = NULL;
    this->NextStance = NULL;
}

