#include "AIAspectSettings_IntCompare.h"

FAIAspectSettings_IntCompare::FAIAspectSettings_IntCompare() {
    this->WhenConditionFails = EAIActionResultDirective::Continue;
    this->CompareMethod = ECompareMethod::Equals;
    this->bAbortOnChange = false;
    this->bRefreshImmediatelyOnChange = false;
}

