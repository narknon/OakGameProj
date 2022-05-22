#include "CSPuzzleIntroSettings.h"

FCSPuzzleIntroSettings::FCSPuzzleIntroSettings() {
    this->DelayBeforeStartingIntro = 0.00f;
    this->DelayBetweenEachPuzzleColumn = 0.00f;
    this->DelayBetweenEachPuzzleTile = 0.00f;
    this->EasingFunction = ECSTweenEasingFunc::Linear;
    this->FallingSpeed = 0.00f;
}

