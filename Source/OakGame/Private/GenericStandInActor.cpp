#include "GenericStandInActor.h"
#include "GbxActionComponent.h"

AGenericStandInActor::AGenericStandInActor() {
    this->ActionComponent = CreateDefaultSubobject<UGbxActionComponent>(TEXT("GbxAction"));
}

