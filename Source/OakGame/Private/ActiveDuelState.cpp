#include "ActiveDuelState.h"

FActiveDuelState::FActiveDuelState() {
    this->DuelArena = NULL;
    this->DuelTotem = NULL;
    this->DuelInstigator = NULL;
    this->WinningTeam = NULL;
    this->TradeManager = NULL;
    this->ActiveIndex = 0;
    this->Classification = EDuelClassification::Standard1v1;
}

