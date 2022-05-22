#include "DialogAudioComponentProvider_OcclusionResistant.h"

UDialogAudioComponentProvider_OcclusionResistant::UDialogAudioComponentProvider_OcclusionResistant() {
    this->OcclusionWeight = 0.40f;
    this->ComponentTag = TEXT("OcclusionResistant");
}

