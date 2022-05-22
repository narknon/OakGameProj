#include "MovieSceneDialogSection.h"

UMovieSceneDialogSection::UMovieSceneDialogSection() {
    this->bPlayThroughDialogSystem = true;
    this->bSubtitleOnly = false;
    this->ManualSubtitleDuration = 1.00f;
    this->SubtitleNameTag = NULL;
}

