#include "NewGameSettings.h"

UNewGameSettings::UNewGameSettings() {
    this->CharacterSelectTimeInSeconds = 120;
    this->CharacterSelectQuickStartTimeInSeconds = 5;
    this->NewGameMap = TEXT("/Game/Maps/Zone_0/Recruitment/Recruitment_P");
    this->CharacterSelectCompletionEvent = TEXT("CharSelectEnded");
    this->IntroMovies.AddDefaulted(6);
}

