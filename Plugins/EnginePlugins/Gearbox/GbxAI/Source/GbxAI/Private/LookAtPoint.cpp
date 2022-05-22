#include "LookAtPoint.h"
#include "LookAtPointComponent.h"

ALookAtPoint::ALookAtPoint() {
    this->LookAtPointComponent = CreateDefaultSubobject<ULookAtPointComponent>(TEXT("LookAtPointComponent"));
}

