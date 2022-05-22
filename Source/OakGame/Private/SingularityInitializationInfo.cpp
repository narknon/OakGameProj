#include "SingularityInitializationInfo.h"

FSingularityInitializationInfo::FSingularityInitializationInfo() {
    this->Duration = 0.00f;
    this->ForcePerSecond = 0.00f;
    this->SpinDirection = ESpinDirection::SD_NoSpin;
    this->SpinMinDistance = 0.00f;
    this->SpinMaxDistance = 0.00f;
    this->SpinHorizontalScalar = 0.00f;
    this->SpinVerticalScalar = 0.00f;
    this->bAttachToOwnerRoot = false;
    this->bPersistantComponent = false;
    this->SingularityParticles = NULL;
    this->BaseDestructibleChunkMass = 0.00f;
    this->SingularitySource = NULL;
    this->MinFalloffScalar = 0.00f;
}

