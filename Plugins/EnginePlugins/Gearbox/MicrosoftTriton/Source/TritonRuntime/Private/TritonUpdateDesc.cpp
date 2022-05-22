#include "TritonUpdateDesc.h"

FTritonUpdateDesc::FTritonUpdateDesc() {
    this->bCleanTempDirectory = false;
    this->bExportVoxelizedRegion = false;
    this->bCreateJobConfig = false;
    this->bCreateTaskImages = false;
    this->bRunTasks = false;
    this->bCreateCompressedVoxMap = false;
    this->bCollateResults = false;
    this->bGenerateLongDistanceProbes = false;
    this->bFixupDirectionalReciprocity = false;
    this->bIncorporateNewACE = false;
}

