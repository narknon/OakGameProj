#include "ShieldAugment_Triggerable.h"



UShieldAugment_Triggerable::UShieldAugment_Triggerable() {
    this->TriggerableOn = EAugmentTriggerOn::TriggerOn_Depleted;
    this->bUntriggerable = false;
    this->UntriggerableOn = EAugmentTriggerOn::TriggerOn_NotDepleted;
    this->bResetOnOpposingTrigger = true;
}

