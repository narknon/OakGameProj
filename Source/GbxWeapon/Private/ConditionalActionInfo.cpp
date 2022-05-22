#include "ConditionalActionInfo.h"

FConditionalActionInfo::FConditionalActionInfo() {
    this->Condition = NULL;
    this->Action = NULL;
    this->ActionNetMode = EGbxActionNetMode::ServerAuth;
}

