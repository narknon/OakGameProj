#include "RecoilPatternData.h"

URecoilPatternData::URecoilPatternData() {
    this->bRandom = false;
    this->EndOfPatternAction = ERecoilEndOfPatternAction::None;
    this->RepeatPatternStartIndex = 0;
    this->EndOfPatternRise = 0.00f;
    this->bAutoGenerateGoodness = true;
    this->PatternHeightGoodness = 0.00f;
    this->PatternWidthGoodness = 0.00f;
}

