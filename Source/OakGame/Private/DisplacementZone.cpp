#include "DisplacementZone.h"
#include "Components/BoxComponent.h"
#include "Components/ArrowComponent.h"

ADisplacementZone::ADisplacementZone() {
    this->Speed = 100.00f;
    this->SpeedPullToCenter = 0.00f;
    this->BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
    this->ArrowDirectionComponent = CreateDefaultSubobject<UArrowComponent>(TEXT("Displacement Direction"));
}

