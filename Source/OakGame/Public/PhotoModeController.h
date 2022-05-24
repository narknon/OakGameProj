#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhotoModeState.h"
#include "PhotoModeController.generated.h"

class AOakPlayerController;
class UPostProcessComponent;
class AOakCharacter_Player;
class UPhotoModeViewInterface;
class IPhotoModeViewInterface;
class UGameStatData;

UCLASS()
class OAKGAME_API APhotoModeController : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, VisibleAnywhere)
    UPostProcessComponent* PostProcessComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AOakCharacter_Player* PhotoPawn;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    AOakPlayerController* PhotoController;
    
private:
    UPROPERTY()
    TScriptInterface<IPhotoModeViewInterface> PhotoModeView;
    
    UPROPERTY()
    bool bPhotoModeActive;
    
    UPROPERTY()
    FPhotoModeState PhotoModeState;
    
    UPROPERTY()
    UGameStatData* StylizeStat;
    
public:
    APhotoModeController();
    UFUNCTION(BlueprintCallable)
    void TakeScreenshot();
    
    UFUNCTION(BlueprintCallable)
    void SetVignetteIntensity(float VignetteIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetVignetteFeathering(float VignetteFeathering);
    
    UFUNCTION(BlueprintCallable)
    void SetViewRoll(float ViewRoll);
    
    UFUNCTION(BlueprintCallable)
    void SetToe(float Toe);
    
    UFUNCTION(BlueprintCallable)
    void SetTimeOfDay(float TimeOfDay);
    
    UFUNCTION(BlueprintCallable)
    void SetSuperSharpModeState(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetSlope(float Slope);
    
    UFUNCTION(BlueprintCallable)
    void SetShoulder(float Shoulder);
    
    UFUNCTION(BlueprintCallable)
    void SetSaturation(float SaturationSlider);
    
    UFUNCTION(BlueprintCallable)
    void SetQuality(float Quality);
    
    UFUNCTION(BlueprintCallable)
    void SetPhotoModeUIVisibility(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetOverrideFocusState(bool bOverrideFocusState);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetHidePlayerState(bool bHidePlayerState);
    
    UFUNCTION(BlueprintCallable)
    void SetHideDamageNumbersState(bool bHideDamageNumbersState);
    
    UFUNCTION(BlueprintCallable)
    void SetGrainIntensity(float GrainIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamma(float Gamma);
    
    UFUNCTION(BlueprintCallable)
    void SetGamePausedState(bool bPaused);
    
    UFUNCTION(BlueprintCallable)
    void SetGain(float Gain);
    
    UFUNCTION(BlueprintCallable)
    void SetFringeIntensity(float FringeIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetFOV(float FOV);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalRegion(float FocalRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetFocalDistance(float FocalDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterIntensity(float FilterIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetFilterIndex(int32 FilterIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetFilmToneMapperState(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDOFIntensity(float DOFIntensity);
    
    UFUNCTION(BlueprintCallable)
    void SetContrast(float ConstrastSlider);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoFocusState(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllSettings();
    
    UFUNCTION()
    void OnNumPlayersChanged(int32 NewNumPlayers);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnExitPhotoMode();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEnterPhotoMode();
    
    UFUNCTION(BlueprintPure)
    bool IsPhotoModeActive() const;
    
    UFUNCTION(BlueprintPure)
    bool IsCinematicPhoto() const;
    
    UFUNCTION(BlueprintPure)
    float GetVignetteIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetVignetteFeathering() const;
    
    UFUNCTION(BlueprintPure)
    float GetViewRoll() const;
    
    UFUNCTION(BlueprintPure)
    float GetToe() const;
    
    UFUNCTION(BlueprintPure)
    float GetTimeOfDay() const;
    
    UFUNCTION(BlueprintPure)
    bool GetSuperSharpModeState() const;
    
    UFUNCTION(BlueprintPure)
    float GetSlope() const;
    
    UFUNCTION(BlueprintPure)
    float GetShoulder() const;
    
    UFUNCTION(BlueprintPure)
    float GetSaturation() const;
    
    UFUNCTION(BlueprintPure)
    float GetQuality() const;
    
    UFUNCTION(BlueprintPure)
    bool GetPhotoModeUIVisibility() const;
    
    UFUNCTION(BlueprintPure)
    FPhotoModeState GetPhotoModeState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetOverrideFocusState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHUDVisibility() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHidePlayerState() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHideDamageNumbersState() const;
    
    UFUNCTION(BlueprintPure)
    float GetGrainIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetGamma() const;
    
    UFUNCTION(BlueprintPure)
    bool GetGamePausedState() const;
    
    UFUNCTION(BlueprintPure)
    float GetGain() const;
    
    UFUNCTION(BlueprintPure)
    float GetFringeIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetFOV() const;
    
    UFUNCTION(BlueprintPure)
    float GetFocalRegion() const;
    
    UFUNCTION(BlueprintPure)
    float GetFocalDistance() const;
    
    UFUNCTION(BlueprintPure)
    float GetFilterIntensity() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetFilterIndex() const;
    
    UFUNCTION(BlueprintPure)
    bool GetFilmToneMapperState() const;
    
    UFUNCTION(BlueprintPure)
    float GetDOFIntensity() const;
    
    UFUNCTION(BlueprintPure)
    float GetContrast() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAutoFocusState() const;
    
protected:
    UFUNCTION()
    void DeactivateSlomo();
    
    UFUNCTION()
    void ActivateSlomo();
    
};

