#include "CSPuzzleFeedbackSettings.h"

FCSPuzzleFeedbackSettings::FCSPuzzleFeedbackSettings() {
    this->DelayBeforeFirstFeedback = 0.00f;
    this->DelayBeforeProgressBarFeedback = 0.00f;
    this->TimeToUpdateProgressBar = 0.00f;
    this->TileSpeed = 0.00f;
    this->TileMovementEasingFunction = ECSTweenEasingFunc::Linear;
    this->DelayBetweenEachTileFlipped = 0.00f;
    this->DelaytBetweenTileFlippingAndPerferctAlignmentAnim = 0.00f;
    this->DelayBetweenEachTilePerfectAlignmentAnim = 0.00f;
}

