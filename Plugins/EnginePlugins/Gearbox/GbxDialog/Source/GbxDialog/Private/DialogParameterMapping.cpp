#include "DialogParameterMapping.h"

FDialogParameterMapping::FDialogParameterMapping() {
    this->TargetParameter = NULL;
    this->SourceType = EDialogParameterMappingSourceType::Parameter;
    this->SourceObject = NULL;
    this->SourceObjectSubContext = NULL;
    this->SourceNumber = 0.00f;
}

