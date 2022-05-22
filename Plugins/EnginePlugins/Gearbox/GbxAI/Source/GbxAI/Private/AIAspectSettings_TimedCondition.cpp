#include "AIAspectSettings_TimedCondition.h"

FAIAspectSettings_TimedCondition::FAIAspectSettings_TimedCondition() {
    this->WhenConditionFails = EAIActionResultDirective::Continue;
    this->FalseResult = EAIActionResult::None;
}

