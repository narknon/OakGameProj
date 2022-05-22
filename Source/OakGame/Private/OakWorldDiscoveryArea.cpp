#include "OakWorldDiscoveryArea.h"
#include "DiscoveryAreaComponent.h"

AOakWorldDiscoveryArea::AOakWorldDiscoveryArea() {
    this->DiscoveryComponent = CreateDefaultSubobject<UDiscoveryAreaComponent>(TEXT("DiscoveryComponent"));
}

