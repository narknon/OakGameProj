#include "CharacterSoundTag.h"

UCharacterSoundTag::UCharacterSoundTag() {
    this->Type = ECharacterSoundType::SFX;
    this->ChanceToPlay = 1.00f;
    this->bHighPriorityInterruptingVox = false;
    this->bPainVox = false;
    this->bDeathVox = false;
}

