#include "PhotoModeController.h"
#include "Components/PostProcessComponent.h"

void APhotoModeController::TakeScreenshot() {
}

void APhotoModeController::SetVignetteIntensity(float VignetteIntensity) {
}

void APhotoModeController::SetVignetteFeathering(float VignetteFeathering) {
}

void APhotoModeController::SetViewRoll(float ViewRoll) {
}

void APhotoModeController::SetToe(float Toe) {
}

void APhotoModeController::SetTimeOfDay(float TimeOfDay) {
}

void APhotoModeController::SetSuperSharpModeState(bool bEnable) {
}

void APhotoModeController::SetSlope(float Slope) {
}

void APhotoModeController::SetShoulder(float Shoulder) {
}

void APhotoModeController::SetSaturation(float SaturationSlider) {
}

void APhotoModeController::SetQuality(float Quality) {
}

void APhotoModeController::SetPhotoModeUIVisibility(bool bVisible) {
}

void APhotoModeController::SetOverrideFocusState(bool bOverrideFocusState) {
}

void APhotoModeController::SetHUDVisibilityChanged(bool bVisible) {
}

void APhotoModeController::SetHidePlayerState(bool bHidePlayerState) {
}

void APhotoModeController::SetHideDamageNumbersState(bool bHideDamageNumbersState) {
}

void APhotoModeController::SetGrainIntensity(float GrainIntensity) {
}

void APhotoModeController::SetGamma(float Gamma) {
}

void APhotoModeController::SetGamePausedState(bool bPaused) {
}

void APhotoModeController::SetGain(float Gain) {
}

void APhotoModeController::SetFringeIntensity(float FringeIntensity) {
}

void APhotoModeController::SetFOV(float FOV) {
}

void APhotoModeController::SetFocalRegion(float FocalRegion) {
}

void APhotoModeController::SetFocalDistance(float FocalDistance) {
}

void APhotoModeController::SetFilterIntensity(float FilterIntensity) {
}

void APhotoModeController::SetFilterIndex(int32 FilterIndex) {
}

void APhotoModeController::SetFilmToneMapperState(bool bEnable) {
}

void APhotoModeController::SetDOFIntensity(float DOFIntensity) {
}

void APhotoModeController::SetContrast(float ConstrastSlider) {
}

void APhotoModeController::SetAutoFocusState(bool bEnable) {
}

void APhotoModeController::ResetAllSettings() {
}

void APhotoModeController::OnNumPlayersChanged(int32 NewNumPlayers) {
}



bool APhotoModeController::IsPhotoModeActive() const {
    return false;
}

bool APhotoModeController::IsCinematicPhoto() const {
    return false;
}

float APhotoModeController::GetVignetteIntensity() const {
    return 0.0f;
}

float APhotoModeController::GetVignetteFeathering() const {
    return 0.0f;
}

float APhotoModeController::GetViewRoll() const {
    return 0.0f;
}

float APhotoModeController::GetToe() const {
    return 0.0f;
}

float APhotoModeController::GetTimeOfDay() const {
    return 0.0f;
}

bool APhotoModeController::GetSuperSharpModeState() const {
    return false;
}

float APhotoModeController::GetSlope() const {
    return 0.0f;
}

float APhotoModeController::GetShoulder() const {
    return 0.0f;
}

float APhotoModeController::GetSaturation() const {
    return 0.0f;
}

float APhotoModeController::GetQuality() const {
    return 0.0f;
}

bool APhotoModeController::GetPhotoModeUIVisibility() const {
    return false;
}

FPhotoModeState APhotoModeController::GetPhotoModeState() const {
    return FPhotoModeState{};
}

bool APhotoModeController::GetOverrideFocusState() const {
    return false;
}

bool APhotoModeController::GetHUDVisibility() const {
    return false;
}

bool APhotoModeController::GetHidePlayerState() const {
    return false;
}

bool APhotoModeController::GetHideDamageNumbersState() const {
    return false;
}

float APhotoModeController::GetGrainIntensity() const {
    return 0.0f;
}

float APhotoModeController::GetGamma() const {
    return 0.0f;
}

bool APhotoModeController::GetGamePausedState() const {
    return false;
}

float APhotoModeController::GetGain() const {
    return 0.0f;
}

float APhotoModeController::GetFringeIntensity() const {
    return 0.0f;
}

float APhotoModeController::GetFOV() const {
    return 0.0f;
}

float APhotoModeController::GetFocalRegion() const {
    return 0.0f;
}

float APhotoModeController::GetFocalDistance() const {
    return 0.0f;
}

float APhotoModeController::GetFilterIntensity() const {
    return 0.0f;
}

int32 APhotoModeController::GetFilterIndex() const {
    return 0;
}

bool APhotoModeController::GetFilmToneMapperState() const {
    return false;
}

float APhotoModeController::GetDOFIntensity() const {
    return 0.0f;
}

float APhotoModeController::GetContrast() const {
    return 0.0f;
}

bool APhotoModeController::GetAutoFocusState() const {
    return false;
}

void APhotoModeController::DeactivateSlomo() {
}

void APhotoModeController::ActivateSlomo() {
}

APhotoModeController::APhotoModeController() {
    this->PostProcessComponent = CreateDefaultSubobject<UPostProcessComponent>(TEXT("PhotoMode_PostProcessComponent"));
    this->PhotoPawn = NULL;
    this->PhotoController = NULL;
    this->bPhotoModeActive = false;
    this->StylizeStat = NULL;
}

