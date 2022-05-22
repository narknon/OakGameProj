#include "PipelineDamageInput.h"

FPipelineDamageInput::FPipelineDamageInput() {
    this->DamageReceiverComp = NULL;
    this->InstigatorPawn = NULL;
    this->AdditionalEventListenerPawn = NULL;
    this->DamageCauser = NULL;
    this->DamageModifierComp = NULL;
    this->InstigatorController = NULL;
    this->DamageSource = NULL;
    this->DamageType = NULL;
    this->ImpactData = NULL;
    this->InstigatorFeedback = NULL;
    this->bSimulatedOnClient = false;
}

