#include "AIAspectSettings_EnvQuery.h"

FAIAspectSettings_EnvQuery::FAIAspectSettings_EnvQuery() {
    this->bRefreshAITreeOnQuerySuccess = false;
    this->bForceRequeryOnSuccess = false;
    this->bClearQueryOnSuccess = false;
    this->Preset = UseBestLocation;
    this->bUsePreset = false;
    this->bQueryContinuously = false;
    this->bUpdateValueWhileRunning = false;
    this->bKeepValidValues = false;
    this->bCanUseSelf = false;
    this->UseSelfDistance = 0.00f;
    this->bSucceedIfHasValue = false;
    this->bMigrated = false;
}

