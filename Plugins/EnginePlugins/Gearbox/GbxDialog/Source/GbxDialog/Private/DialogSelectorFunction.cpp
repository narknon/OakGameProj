#include "DialogSelectorFunction.h"

UDialogSelectorFunction::UDialogSelectorFunction() {
    this->bTriggeringCondition = false;
    this->CachedResultLifetime = ECachedResultLifetime::OneTest;
    this->Implementation = NULL;
}

