#include "Perch.h"
#include "PerchComponent.h"

APerch::APerch() {
    this->PerchComponent = CreateDefaultSubobject<UPerchComponent>(TEXT("PerchComponent"));
}

