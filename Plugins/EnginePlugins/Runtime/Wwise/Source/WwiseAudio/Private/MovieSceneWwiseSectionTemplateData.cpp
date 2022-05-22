#include "MovieSceneWwiseSectionTemplateData.h"

FMovieSceneWwiseSectionTemplateData::FMovieSceneWwiseSectionTemplateData() {
    this->PlaybackDirection = EWwiseTrackDirectionality::ForwardsAndBackwards;
    this->WwiseEventStart = NULL;
    this->WwiseEventStop = NULL;
    this->EmitterRadius = 0.00f;
    this->bAllowPlaythrough = false;
    this->bIsLoopingEvent = false;
    this->RowIdx = 0;
}

