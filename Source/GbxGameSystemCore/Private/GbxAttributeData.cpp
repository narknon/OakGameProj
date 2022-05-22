#include "GbxAttributeData.h"

bool UGbxAttributeData::CanSetBaseValue() const {
    return false;
}

bool UGbxAttributeData::CanBindToOnChangedEvent() const {
    return false;
}

bool UGbxAttributeData::CanAddModifiers() const {
    return false;
}

bool UGbxAttributeData::CanAddAndRemoveModifiers() const {
    return false;
}

UGbxAttributeData::UGbxAttributeData() {
    this->ContextResolver = NULL;
    this->ValueResolver = NULL;
}

