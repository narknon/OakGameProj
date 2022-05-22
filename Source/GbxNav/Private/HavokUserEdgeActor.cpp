#include "HavokUserEdgeActor.h"
#include "HavokUserEdgeComponent.h"

void AHavokUserEdgeActor::SetEdgeEnabled(bool bNewEnabled) {
}

bool AHavokUserEdgeActor::IsEdgeEnabled() const {
    return false;
}

AHavokUserEdgeActor::AHavokUserEdgeActor() {
    this->UserEdgeComponent = CreateDefaultSubobject<UHavokUserEdgeComponent>(TEXT("UserEdgeComp"));
}

