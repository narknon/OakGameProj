#include "TritonSimulationParams.h"

FTritonSimulationParams::FTritonSimulationParams() {
    this->SimulationFrequency = 0.00f;
    this->SimulationRadius = 0.00f;
    this->SimulationDepth = 0.00f;
    this->SimulationHeight = 0.00f;
    this->IdealVoxelmapResolutionInMeters = 0.00f;
    this->bUseRMSForAveragingLongDistanceVolumes = false;
    this->bUseWallinessFactorForLongDistanceVolumes = false;
}

