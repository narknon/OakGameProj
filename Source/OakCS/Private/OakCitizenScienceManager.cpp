#include "OakCitizenScienceManager.h"

class UOakCitizenScienceManager;

UOakCitizenScienceManager* UOakCitizenScienceManager::GetCitizenScienceManager() {
    return NULL;
}

UOakCitizenScienceManager::UOakCitizenScienceManager() {
    this->CurrentPuzzleSession = NULL;
    this->CSGlobals = NULL;
}

