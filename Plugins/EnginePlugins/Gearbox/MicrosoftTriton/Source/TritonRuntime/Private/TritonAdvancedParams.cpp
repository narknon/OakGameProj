#include "TritonAdvancedParams.h"

FTritonAdvancedParams::FTritonAdvancedParams() {
    this->bUseProbeStreaming = false;
    this->PreloadDistance = 0.00f;
    this->MaxLoadedProbes = 0;
    this->MinDistanceFractionForPreload = 0.00f;
    this->SpatialInterpCacheSize = 0;
    this->VoxelDecompressionCacheSize = 0;
    this->SimCellCacheSize = 0;
    this->bAllowProbeAutoLoad = false;
    this->ProbeSearchDistance = 0.00f;
}

