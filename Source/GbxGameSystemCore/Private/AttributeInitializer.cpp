#include "AttributeInitializer.h"

float UAttributeInitializer::EvaluateBalanceFormula(float Multiplier, float Level, float Power, float Offset) const {
    return 0.0f;
}


UAttributeInitializer::UAttributeInitializer() {
    this->UsageMode = EAttributeInitializerUsageMode::Set;
}

