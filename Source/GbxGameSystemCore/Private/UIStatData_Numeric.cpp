#include "UIStatData_Numeric.h"

UUIStatData_Numeric::UUIStatData_Numeric() {
    this->ValueStyle = EUIStatValueStyle::AttributeValue;
    this->SignStyle = EUIStatValueSignStyle::AsIs;
    this->RoundingMode = EUIStatValueRoundingMode::RoundToInt;
    this->bDisplayAsPercentage = false;
    this->bDisplayPercentAsFloat = false;
    this->bDisplayAsInverse = false;
    this->bDisplayPlusSign = false;
    this->bDisplayAsOneMinus = false;
    this->bCalculateWithReductionMath = false;
    this->bUseFormatText = false;
    this->bEnableValueRemapping = false;
    this->bUseSupplementalStatFormatText = false;
    this->bUseMinValueCondition = false;
    this->bUseMaxValueCondition = false;
    this->bMinOrMaxValueCondition = false;
    this->Condition = NULL;
    this->FloatPrecision = 1;
    this->SupplementalStat = NULL;
    this->SupplementalStatCombinationMethod = EUIStatCombinationMethod::Multiply;
    this->SupplementalStatCondition = NULL;
}

