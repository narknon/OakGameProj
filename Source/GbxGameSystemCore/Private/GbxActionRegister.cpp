#include "GbxActionRegister.h"

FGbxActionRegister::FGbxActionRegister() {
    this->Type = EActionRegisterType::NoType;
    this->Value = 0.00f;
    this->IntValue = 0;
    this->ObjectValue = NULL;
}

