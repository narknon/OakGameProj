#include "AIAspectSettings_BlackboardKey.h"

FAIAspectSettings_BlackboardKey::FAIAspectSettings_BlackboardKey() {
    this->bInvertResult = false;
    this->WhenConditionFails = EAIActionResultDirective::Continue;
    this->OnBecomeFalse = EAIActionResult::None;
    this->bAbortOnChange = false;
    this->bRefreshImmediatelyOnChange = false;
}

