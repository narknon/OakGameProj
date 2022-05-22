#include "MatchmakingRequirement.h"

FMatchmakingRequirement::FMatchmakingRequirement() {
    this->Type = EMatchmakingRequirementType::None;
    this->ComparisonOp = EMatchmakingRequirementComparisonOp::None;
    this->Value = 0;
}

