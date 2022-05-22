#include "CreditsSection.h"

FCreditsSection::FCreditsSection() {
    this->TransitionTimeBetweenImages = 0.00f;
    this->HorizontalSpacing = 0.00f;
    this->UserAnimationSpeed = 0.00f;
    this->DefaultAnimationSpeed = 0.00f;
    this->PauseTime = 0.00f;
    this->bAllowScrollingCredits = false;
    this->ScrollingDelay = 0.00f;
    this->DelayAfterLastCredit = 0.00f;
    this->BackgroundMusicStartEvent = NULL;
    this->BackgroundMusicEndEvent = NULL;
}

