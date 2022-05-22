#include "SmartObjectAction.h"

USmartObjectAction::USmartObjectAction() {
    this->bPassiveAction = true;
    this->bCombatAction = true;
    this->UseCondition = NULL;
    this->bUsageTime = true;
    this->bMaxUsers = true;
    this->MaxUsers = 1;
}

