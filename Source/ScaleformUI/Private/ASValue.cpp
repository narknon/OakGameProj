#include "ASValue.h"

FASValue::FASValue() {
    this->ASType = EASType::Undefined;
    this->ASBoolean = false;
    this->ASInt = 0;
    this->AsNumber = 0.00f;
    this->AsObject = NULL;
}

