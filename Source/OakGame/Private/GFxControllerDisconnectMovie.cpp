#include "GFxControllerDisconnectMovie.h"

UGFxControllerDisconnectMovie::UGFxControllerDisconnectMovie() {
    this->ControllerDisconnectHeaderText = FText::FromString(TEXT("{0}|platform(default=Controller,xbox=Controller,playstation=Controller) Disconnected"));
    this->ControllerDisconnectBodyText = FText::FromString(TEXT("<font color=\"#ffca29\">{0}</font> does not have a {0}|platform(default=controller,xbox=controller,playstation=controller) connected."));
    this->ContentClip = NULL;
    this->WindowFrameClip = NULL;
    this->HeaderTextFieldClip = NULL;
    this->BodyTextFieldClip = NULL;
    this->TotalNumDisconnectMovies = 0;
}

