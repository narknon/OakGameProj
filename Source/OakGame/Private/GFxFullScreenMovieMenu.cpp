#include "GFxFullScreenMovieMenu.h"

void UGFxFullScreenMovieMenu::OnMoviePlaybackComplete() const {
}

UGFxFullScreenMovieMenu::UGFxFullScreenMovieMenu() {
    this->GFxMediaPlayer = NULL;
    this->MediaSourceObject = NULL;
    this->bScaleformHasStarted = false;
    this->bMoviePlaybackComplete = false;
}

