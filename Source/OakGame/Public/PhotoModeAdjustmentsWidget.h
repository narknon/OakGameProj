#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "PhotoModeViewInterface.h"
#include "Styling/SlateTypes.h"
#include "PhotoModeAdjustmentsWidget.generated.h"

class AOakPlayerController;
class APhotoModeController;
class UPhotoModeGlobals;
class AOakCharacter_Player;

UCLASS(EditInlineNew)
class OAKGAME_API UPhotoModeAdjustmentsWidget : public UGbxUmgMenu, public IPhotoModeViewInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    APhotoModeController* PhotoModeController;
    
protected:
    UPROPERTY()
    UPhotoModeGlobals* PhotoModeGlobals;
    
public:
    UPhotoModeAdjustmentsWidget();
    UFUNCTION(BlueprintCallable)
    void OnVignetteIntensityChanged(float NewVignetteIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnVignetteFeatheringChanged(float NewVignetteFeathering);
    
    UFUNCTION(BlueprintCallable)
    void OnViewRollChanged(float NewViewRoll);
    
    UFUNCTION(BlueprintCallable)
    void OnToeChanged(float NewToe);
    
    UFUNCTION(BlueprintCallable)
    void OnTimeOfDayChanged(float NewTimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    void OnSuperSharpModeStateChanged(bool bNewSuperSharpModeState);
    
    UFUNCTION(BlueprintCallable)
    void OnSlopeChanged(float NewSlope);
    
    UFUNCTION(BlueprintCallable)
    void OnShoulderChanged(float NewShoulder);
    
    UFUNCTION(BlueprintCallable)
    void OnSaturationChanged(float NewSaturation);
    
    UFUNCTION(BlueprintCallable)
    void OnQualityChanged(float NewQuality);
    
    UFUNCTION(BlueprintCallable)
    void OnPhotoModeUIVisiblityChanged(bool bNewVisibleState);
    
    UFUNCTION(BlueprintCallable)
    void OnOverrideFocusStateChanged(bool bNewOverrideFocusState);
    
    UFUNCTION(BlueprintCallable)
    void OnHUDVisibilityChanged(bool bNewVisibleState);
    
    UFUNCTION(BlueprintCallable)
    void OnHidePlayerStateChanged(bool bNewHidePlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OnHideDamageNumbersStateChanged(bool bNewHideDamageNumbersState);
    
    UFUNCTION(BlueprintCallable)
    void OnGrainIntensityChanged(float NewGrainIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnGammaChanged(float NewGamma);
    
    UFUNCTION(BlueprintCallable)
    void OnGamePausedStateChangeRequested();
    
    UFUNCTION(BlueprintCallable)
    void OnGainChanged(float NewGain);
    
    UFUNCTION(BlueprintCallable)
    void OnFringeIntensityChanged(float NewFringeIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnFOVChanged(float NewFOV);
    
    UFUNCTION(BlueprintCallable)
    void OnFocalRegionChanged(float NewFocalRegion);
    
    UFUNCTION(BlueprintCallable)
    void OnFocalDistanceChanged(float NewFocalDistance);
    
    UFUNCTION(BlueprintCallable)
    void OnFilterIntensityChanged(float NewFilterIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnFilterIndexChanged(int32 NewFilterIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFilmToneMapperStateChanged(bool bNewFileToneMapperState);
    
    UFUNCTION(BlueprintCallable)
    void OnExitPhotoModeRequested();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitPhotoMode(AOakCharacter_Player* Player, AOakPlayerController* PlayerController);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterPhotoMode(AOakCharacter_Player* Player, AOakPlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void OnDOFIntensityChanged(float NewDOFIntensity);
    
    UFUNCTION(BlueprintCallable)
    void OnContrastChanged(float NewConstrast);
    
    UFUNCTION(BlueprintCallable)
    void OnAutoFocusStateChanged(bool bNewFocusState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleGameSoloPlayStateChanged(bool bSoloPlay);
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleGamePauseStateChanged(bool bNewPauseState);
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderViewRollToGameViewRoll(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderTimeToGameTime(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderSaturationToGameSaturation(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderQualityToGameQuality(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderGammaToGameGamma(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderGainToGameGain(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderFringeIntensityToGameFringeIntensity(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderFOVToGameFOV(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderFocalRegionToGameFocalRegion(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderFocalDistanceToGameFocalDistance(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderDOFIntensityToGameDOFIntensity(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertSliderContrastToGameContrast(float SliderValue) const;
    
    UFUNCTION(BlueprintPure)
    void ConvertMinutesToHourMinutesString(int32 Minutes, FString& OutTimeString) const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameViewRollToSliderViewRoll() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameSaturationToSliderSaturation() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameQualityToSliderQuality() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameGammaToSliderGamma() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameGainToSliderGain() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameFringeIntensityToSliderFringeIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameFOVToSliderFOV() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameFocalRegionToSliderFocalRegion() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameFocalDistanceToSliderGain() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameDOFIntensityToSliderDOFIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float ConvertGameContrastToSliderContrast() const;
    
    UFUNCTION(BlueprintPure)
    ECheckBoxState ConvertBoolToCheckBoxState(bool bBooleanState) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

