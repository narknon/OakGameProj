#include "GrenadeBehavior_DeliveryLongbow.h"

UGrenadeBehavior_DeliveryLongbow::UGrenadeBehavior_DeliveryLongbow() {
    this->LongbowInitialVelocity = 800.00f;
    this->LongbowFinalVelocity = 1500.00f;
    this->LongbowTeleportDelay = 0.30f;
    this->LongbowTeleportMaxDistance = 10000.00f;
    this->LongbowTeleportLineParticleTemplate = NULL;
    this->LongbowStartTeleportingAudioEvent = NULL;
    this->LongbowStartTeleportingParticleTemplate = NULL;
    this->LongbowTeleportTraceChannel = TraceTypeQuery1;
    this->LongbowTeleportProximityTraceRadius = 10.00f;
    this->LongbowTeleportProximityTraceChannel = TraceTypeQuery1;
    this->LongbowEndTeleportingAudioEvent = NULL;
    this->LongbowRainSplitSpeed = 10.00f;
    this->LongbowRainSplitAcceleration = 1000.00f;
    this->LongbowRainHeightScalar = 1.00f;
    this->LongbowEndTeleportingParticleTemplate = NULL;
    this->DividerLongbowTeleportDelay = 0.40f;
}

