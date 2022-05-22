#include "DialogLineData.h"

UDialogLineData::UDialogLineData() {
    this->ScorePriorityMode = ELineScorePriorityMode::RetainLowerScores;
    this->Weight = 1.00f;
    this->SpeakingCharacter = NULL;
    this->CharacterQualifier = NULL;
    this->FollowupEvent = NULL;
    this->bSequential = false;
}

