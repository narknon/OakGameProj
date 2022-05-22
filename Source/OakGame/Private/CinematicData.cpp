#include "CinematicData.h"

FCinematicData::FCinematicData() {
    this->CinematicTag = NULL;
    this->Sequence = NULL;
    this->Movie = NULL;
    this->IntroCinematicMode = NULL;
    this->bRepeatable = false;
    this->bDisallowCutsceneSkip = false;
    this->IntroTime = 0.00f;
    this->IntroScreenParticle = NULL;
    this->PlayingCinematicMode = NULL;
}

