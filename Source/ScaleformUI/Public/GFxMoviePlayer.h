#pragma once
#include "CoreMinimal.h"
#include "GFxWidgetBinding.h"
#include "UObject/Object.h"
#include "GFxHitTestType.h"
#include "ExternalTexture.h"
#include "InputCoreTypes.h"
#include "EGFxRenderTextureMode.h"
#include "FsCommandSignatureDelegate.h"
#include "OnStartCommandSignatureDelegate.h"
#include "OnTickCommandSignatureDelegate.h"
#include "OnFocusCommandSignatureDelegate.h"
#include "EGFxScaleMode.h"
#include "UObject/NoExportTypes.h"
#include "ASValue.h"
#include "EGFxTimingMode.h"
#include "ASPerspectiveTransform.h"
#include "ASDisplayInfo.h"
#include "ASColorTransform.h"
#include "EGFxAlign.h"
#include "GFxMoviePlayer.generated.h"

class UTexture;
class USwfMovie;
class UGFxObject;
class UTextureRenderTarget2D;
class UGFxMoviePlayer;

UCLASS(BlueprintType, Const)
class SCALEFORMUI_API UGFxMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString SwfAssetName;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGFxObject* Root;
    
    UPROPERTY(EditAnywhere)
    uint8 bDisplayWithHudOff: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bEnableGammaCorrection: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bAllowInput: 1;
    
    UPROPERTY(VisibleAnywhere)
    uint8 bAllowFocus: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCloseOnLevelChange: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bOnlyOwnerFocusable: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bDiscardNonOwnerInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureKeyboardInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureMouseInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureGamepadInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCaptureTouchInput: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsSplitscreenLayoutModified: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bShowDefaultMouseCursor: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBlurLesserMovies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bHideLesserMovies: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsPriorityBlurred: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIsPriorityHidden: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreVisibilityEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bIgnoreBlurEffect: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bRefreshed: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bPerformHitTest: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bCacheThisDefinition: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSkipUnnamedObjectsDuringPopulation: 1;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<GFxHitTestType::Type> HitTestType;
    
    UPROPERTY(Transient)
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(Transient)
    UObject* ExternalInterface;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> CaptureKeys;
    
    UPROPERTY(EditAnywhere)
    TArray<FKey> FocusIgnoreKeys;
    
    UPROPERTY()
    TArray<FExternalTexture> ExternalTextures;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGFxRenderTextureMode::Type> RenderTextureMode;
    
    UPROPERTY(EditAnywhere)
    uint8 Priority;
    
    UPROPERTY()
    TArray<FGFxWidgetBinding> WidgetBindings;
    
    UPROPERTY()
    int32 SplitscreenLayoutYAdjust;
    
    UPROPERTY(BlueprintAssignable)
    FFsCommandSignature OnFsCommand;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartCommandSignature OnStartCommand;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartCommandSignature OnCloseCommand;
    
    UPROPERTY(BlueprintAssignable)
    FOnTickCommandSignature OnTickCommand;
    
    UPROPERTY(BlueprintAssignable)
    FOnFocusCommandSignature OnFocusGainedCommand;
    
    UPROPERTY(BlueprintAssignable)
    FOnFocusCommandSignature OnFocusLostCommand;
    
protected:
    UPROPERTY(EditAnywhere)
    bool bIgnoresSafeFrameScaling;
    
    UPROPERTY(EditAnywhere)
    bool bIgnoresHDRCalibration;
    
    UPROPERTY(Transient)
    TArray<UGFxObject*> CachedMovieClipsArray;
    
public:
    UGFxMoviePlayer();
    UFUNCTION()
    bool Start(bool bRefresh) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVisible(bool bVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVisibility(const FString& MovieClipName, bool bVisible) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetViewport(int32 X, int32 Y, int32 Width, int32 Height) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetView3D(const FTransform& ViewTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetScale(const FString& MovieClipName, float XScale, float YScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPosition(const FString& MovieClipName, float X, float Y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetPause(bool bPausePlayback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMovieCanReceiveInput(bool bCanReceiveInput) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetMovieCanReceiveFocus(bool bCanReceiveFocus) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetFocusIgnoreKeys(const TArray<FKey>& Keys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetExternalTexture(const FString& Resource, UTexture* Texture) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetCaptureKeys(const TArray<FKey>& Keys) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAlignment(TEnumAsByte<EGFxAlign::Type> Align) const;
    
    UFUNCTION()
    void ReceiveGFxCommand(const FString& Command, const FString& Arguments) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static UGFxMoviePlayer* OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, const UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh) const;
    
    UFUNCTION()
    void OnTick(float DeltaTime) const;
    
    UFUNCTION()
    void OnStart() const;
    
    UFUNCTION()
    void OnGameTick(float DeltaTime) const;
    
    UFUNCTION()
    void OnFocusLost(int32 LocalPlayerIndex) const;
    
    UFUNCTION()
    void OnFocusGained(int32 LocalPlayerIndex) const;
    
    UFUNCTION()
    void OnClose() const;
    
    UFUNCTION(BlueprintPure)
    bool IsVisible() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GotoAndStopI(const FString& MovieClipName, int32 Frame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GotoAndStop(const FString& MovieClipName, const FString& Frame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GotoAndPlayI(const FString& MovieClipName, int32 Frame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void GotoAndPlay(const FString& MovieClipName, const FString& Frame) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetVisibility(const FString& MovieClipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FTransform GetView3D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetScale(const FString& MovieClipName, float& XScale, float& YScale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetPosition(const FString& MovieClipName, float& X, float& Y) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FASPerspectiveTransform GetPerspective3D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UGFxObject* GetMovieClip(const FString& MovieClipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FTransform GetDisplayTransform(const FString& MovieClipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FASDisplayInfo GetDisplayInfo(const FString& MovieClipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FASColorTransform GetColorTransform(const FString& MovieClipName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void Close() const;
    
};

