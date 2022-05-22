#include "GbxParam.h"

FGbxParam::FGbxParam() {
    this->ValueType = EGbxParamValueType::Float;
    this->DisabledValueModes = 0;
    this->ValueFlags = 0;
    this->ValueMode = EGbxParamValueMode::Value;
    this->AttributeInitializer = NULL;
    this->AttributeData = NULL;
    this->Condition = NULL;
}

