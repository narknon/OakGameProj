#include "MovieSceneWwiseEventSection.h"

UMovieSceneWwiseEventSection::UMovieSceneWwiseEventSection() {
    this->PlaybackDirection = EWwiseTrackDirectionality::ForwardsAndBackwards;
    this->WwiseEventStart = NULL;
    this->WwiseEventStop = NULL;
    this->EmitterRadius = 25.00f;
    this->bAllowPlaythrough = false;
    this->bIsLoopingEvent = false;
}

