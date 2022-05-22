#include "EnvQueryParams.h"

FEnvQueryParams::FEnvQueryParams() {
    this->Query = NULL;
    this->RunMode = EEnvQueryRunMode::SingleResult;
    this->bDisableRunModeEditing = false;
    this->bDisableContextEditing = false;
    this->bAllowEmptyContexts = false;
    this->RequiredSignificanceRating = GbxSignificance::Unknown;
}

