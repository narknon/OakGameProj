#include "ShieldAugment_Attribute.h"

UShieldAugment_Attribute::UShieldAugment_Attribute() {
    this->OnEquippedAudioEvent = NULL;
    this->bTurnOffEquippedAudio = false;
    this->OnFilledAudioEvent = NULL;
    this->bTurnOffFilledAudio = false;
    this->OnNotDepletedAudioEvent = NULL;
    this->bTurnOffNotDepletedAudio = false;
    this->OnDepletedAudioEvent = NULL;
    this->bTurnOffDepletedAudio = false;
    this->bApplyDefaultEffectsToPlayersInAura = true;
    this->bApplyEffectsToBarrier = false;
}

