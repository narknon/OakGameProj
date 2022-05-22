#include "FoleyMainComponent.h"

class UWwiseEvent;
class UWwiseSwitch;

void UFoleyMainComponent::SetSurfaceModifier(UWwiseEvent* PlayEvent, float Volume, float FootstepVolumeMultiplier) {
}

void UFoleyMainComponent::PlayFootstepEvent(FFoleyEventParams EventParams) {
}

void UFoleyMainComponent::PlayFootstep(FVector FootstepLocation, FRotator FootstepRotation, UWwiseSwitch* MaterialSwitch, float VolumeAdjustment, float PitchAdjustment, UWwiseEvent* ConfigureEvent, bool bPreview) {
}

UFoleyMainComponent::UFoleyMainComponent() {
    this->FoleyMainWwiseEvent = NULL;
    this->LoopStartWwiseEvent = NULL;
    this->FootstepWwiseEvent = NULL;
    this->CharacterSizeSwitch = NULL;
    this->FoleyVolume = 1.00f;
    this->FoleyPitch = 0.00f;
    this->FootstepVolume = 1.00f;
    this->FootstepPitch = 0.00f;
    this->FoleyAccessoryVolume = 1.00f;
    this->FoleyAccessoryPitch = 0.00f;
    this->AttenuationScalingFactor = 1.00f;
    this->LastMaterialSwitch = NULL;
    this->SurfaceModifierEvent = NULL;
    this->SurfaceModifierVolume = 0.00f;
    this->SurfaceModifierFootstepVolumeMultiplier = 0.00f;
}

