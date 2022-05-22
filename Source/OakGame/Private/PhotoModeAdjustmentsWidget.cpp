#include "PhotoModeAdjustmentsWidget.h"

void UPhotoModeAdjustmentsWidget::OnVignetteIntensityChanged(float NewVignetteIntensity) {
}

void UPhotoModeAdjustmentsWidget::OnVignetteFeatheringChanged(float NewVignetteFeathering) {
}

void UPhotoModeAdjustmentsWidget::OnViewRollChanged(float NewViewRoll) {
}

void UPhotoModeAdjustmentsWidget::OnToeChanged(float NewToe) {
}

void UPhotoModeAdjustmentsWidget::OnTimeOfDayChanged(float NewTimeOfDay) {
}

void UPhotoModeAdjustmentsWidget::OnSuperSharpModeStateChanged(bool bNewSuperSharpModeState) {
}

void UPhotoModeAdjustmentsWidget::OnSlopeChanged(float NewSlope) {
}

void UPhotoModeAdjustmentsWidget::OnShoulderChanged(float NewShoulder) {
}

void UPhotoModeAdjustmentsWidget::OnSaturationChanged(float NewSaturation) {
}

void UPhotoModeAdjustmentsWidget::OnQualityChanged(float NewQuality) {
}

void UPhotoModeAdjustmentsWidget::OnPhotoModeUIVisiblityChanged(bool bNewVisibleState) {
}

void UPhotoModeAdjustmentsWidget::OnOverrideFocusStateChanged(bool bNewOverrideFocusState) {
}

void UPhotoModeAdjustmentsWidget::OnHUDVisibilityChanged(bool bNewVisibleState) {
}

void UPhotoModeAdjustmentsWidget::OnHidePlayerStateChanged(bool bNewHidePlayerState) {
}

void UPhotoModeAdjustmentsWidget::OnHideDamageNumbersStateChanged(bool bNewHideDamageNumbersState) {
}

void UPhotoModeAdjustmentsWidget::OnGrainIntensityChanged(float NewGrainIntensity) {
}

void UPhotoModeAdjustmentsWidget::OnGammaChanged(float NewGamma) {
}

void UPhotoModeAdjustmentsWidget::OnGamePausedStateChangeRequested() {
}

void UPhotoModeAdjustmentsWidget::OnGainChanged(float NewGain) {
}

void UPhotoModeAdjustmentsWidget::OnFringeIntensityChanged(float NewFringeIntensity) {
}

void UPhotoModeAdjustmentsWidget::OnFOVChanged(float NewFOV) {
}

void UPhotoModeAdjustmentsWidget::OnFocalRegionChanged(float NewFocalRegion) {
}

void UPhotoModeAdjustmentsWidget::OnFocalDistanceChanged(float NewFocalDistance) {
}

void UPhotoModeAdjustmentsWidget::OnFilterIntensityChanged(float NewFilterIntensity) {
}

void UPhotoModeAdjustmentsWidget::OnFilterIndexChanged(int32 NewFilterIndex) {
}

void UPhotoModeAdjustmentsWidget::OnFilmToneMapperStateChanged(bool bNewFileToneMapperState) {
}

void UPhotoModeAdjustmentsWidget::OnExitPhotoModeRequested() {
}



void UPhotoModeAdjustmentsWidget::OnDOFIntensityChanged(float NewDOFIntensity) {
}

void UPhotoModeAdjustmentsWidget::OnContrastChanged(float NewConstrast) {
}

void UPhotoModeAdjustmentsWidget::OnAutoFocusStateChanged(bool bNewFocusState) {
}



float UPhotoModeAdjustmentsWidget::ConvertSliderViewRollToGameViewRoll(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderTimeToGameTime(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderSaturationToGameSaturation(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderQualityToGameQuality(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderGammaToGameGamma(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderGainToGameGain(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderFringeIntensityToGameFringeIntensity(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderFOVToGameFOV(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderFocalRegionToGameFocalRegion(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderFocalDistanceToGameFocalDistance(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderDOFIntensityToGameDOFIntensity(float SliderValue) const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertSliderContrastToGameContrast(float SliderValue) const {
    return 0.0f;
}

void UPhotoModeAdjustmentsWidget::ConvertMinutesToHourMinutesString(int32 Minutes, FString& OutTimeString) const {
}

float UPhotoModeAdjustmentsWidget::ConvertGameViewRollToSliderViewRoll() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameSaturationToSliderSaturation() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameQualityToSliderQuality() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameGammaToSliderGamma() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameGainToSliderGain() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameFringeIntensityToSliderFringeIntensity() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameFOVToSliderFOV() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameFocalRegionToSliderFocalRegion() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameFocalDistanceToSliderGain() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameDOFIntensityToSliderDOFIntensity() const {
    return 0.0f;
}

float UPhotoModeAdjustmentsWidget::ConvertGameContrastToSliderContrast() const {
    return 0.0f;
}

ECheckBoxState UPhotoModeAdjustmentsWidget::ConvertBoolToCheckBoxState(bool bBooleanState) const {
    return ECheckBoxState::Unchecked;
}

UPhotoModeAdjustmentsWidget::UPhotoModeAdjustmentsWidget() {
    this->PhotoModeController = NULL;
    this->PhotoModeGlobals = NULL;
}

