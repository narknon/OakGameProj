#include "TutorialPuzzle.h"

class UWorld;



UWorld* UTutorialPuzzle::GetTutorialWorld() {
    return NULL;
}

UTutorialPuzzle::UTutorialPuzzle() {
    this->NumberOfTokens = 0;
    this->ScoringMatchingTile = 1;
    this->ScoringPerfectAlignment = 1.15f;
    this->ScoringParScore = 8;
    this->ScoringBestScore = 10;
}

