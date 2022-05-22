#include "GbxNavFlySection.h"
#include "GbxNavFlySectionComponent.h"

AGbxNavFlySection::AGbxNavFlySection() {
    this->FlySectionComponent = CreateDefaultSubobject<UGbxNavFlySectionComponent>(TEXT("SectionComponent"));
}

