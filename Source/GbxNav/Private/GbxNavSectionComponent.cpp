#include "GbxNavSectionComponent.h"

UGbxNavSectionComponent::UGbxNavSectionComponent() {
    this->SectionID = 4294967295;
    this->GbxNavWorld = NULL;
    this->bAddAllConnectedComponentsToBounds = false;
}

