#include "StanceStack.h"

FStanceStack::FStanceStack() {
    this->Owner = NULL;
    this->Top = EStanceStackLayer::Default;
    this->Stack[0] = NULL;
    this->Stack[1] = NULL;
    this->Stack[2] = NULL;
    this->Stack[3] = NULL;
    this->LayerCurr = EStanceStackLayer::Default;
    this->StanceCurr = NULL;
}

