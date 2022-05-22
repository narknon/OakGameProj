#include "RigidBodyComponent.h"

class UPrimitiveComponent;

void URigidBodyComponent::SetKinematic(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

URigidBodyComponent::URigidBodyComponent() {
    this->RigidBodyImpactData = NULL;
    this->bEnableHardSleeping = true;
}

