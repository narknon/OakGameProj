#include "OakModifierStatusEffectData.h"

FOakModifierStatusEffectData::FOakModifierStatusEffectData() {
    this->AttributeData = NULL;
    this->ModifierType = EGbxAttributeModifierType::Scale;
    this->MaxValue = 0.00f;
    this->MinValue = 0.00f;
}

