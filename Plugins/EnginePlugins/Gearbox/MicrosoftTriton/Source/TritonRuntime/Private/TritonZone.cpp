#include "TritonZone.h"
#include "TritonAcousticDataComponent.h"

ATritonZone::ATritonZone() {
    this->TritonDataComponent = CreateDefaultSubobject<UTritonAcousticDataComponent>(TEXT("TritonDataComponent0"));
}

