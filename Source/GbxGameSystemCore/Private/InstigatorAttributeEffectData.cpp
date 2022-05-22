#include "InstigatorAttributeEffectData.h"

FInstigatorAttributeEffectData::FInstigatorAttributeEffectData() {
    this->AttributeToModifyContextSource = EInstigatorAttributeEffectAttributeToModifyContextSource::ThisInventoryActorWithInstigatorFallback;
    this->ModifierValueContext = EInstigatorAttributeEffectModifierValueContext::Instigator;
}

