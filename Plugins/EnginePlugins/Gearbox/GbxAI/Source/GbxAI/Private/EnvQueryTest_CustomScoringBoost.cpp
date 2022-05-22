#include "EnvQueryTest_CustomScoringBoost.h"

UEnvQueryTest_CustomScoringBoost::UEnvQueryTest_CustomScoringBoost() {
    this->ReductionExtreme = 0.00f;
    this->ReductionModerate = 0.17f;
    this->ReductionLight = 0.33f;
    this->NoBoostWeighting = 0.50f;
    this->AmplificationLight = 0.67f;
    this->AmplificationModerate = 0.83f;
    this->AmplificationExtreme = 1.00f;
}

