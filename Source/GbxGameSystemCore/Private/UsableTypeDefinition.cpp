#include "UsableTypeDefinition.h"

UUsableTypeDefinition::UUsableTypeDefinition() {
    this->bDisplayLockedIcon = false;
    this->bHidePrompt = false;
    this->bCostsToUse = false;
    this->CurrencyType = NULL;
    this->CostContext = EUsableTypeCostContext::UsableObject;
}

