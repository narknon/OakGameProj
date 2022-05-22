#include "WeaponBonusDataTableAttributeMappingData.h"

FWeaponBonusDataTableAttributeMappingData::FWeaponBonusDataTableAttributeMappingData() {
    this->bInstigatorAttribute = false;
    this->Attribute = NULL;
    this->ModifierType = EGbxAttributeModifierType::Scale;
    this->DataTableAttributeValueResolver = NULL;
}

