#include "GFxMoviePlayer.h"

class UTexture;
class UObject;
class USwfMovie;
class UTextureRenderTarget2D;
class UGFxMoviePlayer;
class UGFxObject;

bool UGFxMoviePlayer::Start(bool bRefresh) const {
    return false;
}

void UGFxMoviePlayer::SetVisible(bool bVisible) const {
}

void UGFxMoviePlayer::SetVisibility(const FString& MovieClipName, bool bVisible) const {
}

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode) const {
}

void UGFxMoviePlayer::SetViewport(int32 X, int32 Y, int32 Width, int32 Height) const {
}

void UGFxMoviePlayer::SetView3D(const FTransform& ViewTransform) const {
}

void UGFxMoviePlayer::SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value) const {
}

void UGFxMoviePlayer::SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value) const {
}

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode) const {
}

void UGFxMoviePlayer::SetScale(const FString& MovieClipName, float XScale, float YScale) const {
}

void UGFxMoviePlayer::SetPosition(const FString& MovieClipName, float X, float Y) const {
}

void UGFxMoviePlayer::SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform) const {
}

void UGFxMoviePlayer::SetPause(bool bPausePlayback) const {
}

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput) const {
}

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus) const {
}

void UGFxMoviePlayer::SetFocusIgnoreKeys(const TArray<FKey>& Keys) const {
}

void UGFxMoviePlayer::SetExternalTexture(const FString& Resource, UTexture* Texture) const {
}

void UGFxMoviePlayer::SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform) const {
}

void UGFxMoviePlayer::SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info) const {
}

void UGFxMoviePlayer::SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform) const {
}

void UGFxMoviePlayer::SetCaptureKeys(const TArray<FKey>& Keys) const {
}

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<EGFxAlign::Type> Align) const {
}

void UGFxMoviePlayer::ReceiveGFxCommand(const FString& Command, const FString& Arguments) const {
}

UGFxMoviePlayer* UGFxMoviePlayer::OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, const UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool bRefresh) const {
    return NULL;
}

void UGFxMoviePlayer::OnTick(float DeltaTime) const {
}

void UGFxMoviePlayer::OnStart() const {
}

void UGFxMoviePlayer::OnGameTick(float DeltaTime) const {
}

void UGFxMoviePlayer::OnFocusLost(int32 LocalPlayerIndex) const {
}

void UGFxMoviePlayer::OnFocusGained(int32 LocalPlayerIndex) const {
}

void UGFxMoviePlayer::OnClose() const {
}

bool UGFxMoviePlayer::IsVisible() const {
    return false;
}

bool UGFxMoviePlayer::IsPaused() const {
    return false;
}

FASValue UGFxMoviePlayer::Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params) const {
    return FASValue{};
}

void UGFxMoviePlayer::GotoAndStopI(const FString& MovieClipName, int32 Frame) const {
}

void UGFxMoviePlayer::GotoAndStop(const FString& MovieClipName, const FString& Frame) const {
}

void UGFxMoviePlayer::GotoAndPlayI(const FString& MovieClipName, int32 Frame) const {
}

void UGFxMoviePlayer::GotoAndPlay(const FString& MovieClipName, const FString& Frame) const {
}

bool UGFxMoviePlayer::GetVisibility(const FString& MovieClipName) const {
    return false;
}

FTransform UGFxMoviePlayer::GetView3D() const {
    return FTransform{};
}

TArray<FASValue> UGFxMoviePlayer::GetVariableValueArray(const FString& MovieClipName, const FString& MemberName) const {
    return TArray<FASValue>();
}

FASValue UGFxMoviePlayer::GetVariableValue(const FString& MovieClipName, const FString& MemberName) const {
    return FASValue{};
}

bool UGFxMoviePlayer::GetScale(const FString& MovieClipName, float& XScale, float& YScale) const {
    return false;
}

bool UGFxMoviePlayer::GetPosition(const FString& MovieClipName, float& X, float& Y) const {
    return false;
}

FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D() const {
    return FASPerspectiveTransform{};
}

UGFxObject* UGFxMoviePlayer::GetMovieClip(const FString& MovieClipName) const {
    return NULL;
}

FTransform UGFxMoviePlayer::GetDisplayTransform(const FString& MovieClipName) const {
    return FTransform{};
}

FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const FString& MovieClipName) const {
    return FASDisplayInfo{};
}

FASColorTransform UGFxMoviePlayer::GetColorTransform(const FString& MovieClipName) const {
    return FASColorTransform{};
}

void UGFxMoviePlayer::Close() const {
}

UGFxMoviePlayer::UGFxMoviePlayer() {
    this->Root = NULL;
    this->bDisplayWithHudOff = true;
    this->bEnableGammaCorrection = false;
    this->bAllowInput = true;
    this->bAllowFocus = true;
    this->bCloseOnLevelChange = false;
    this->bOnlyOwnerFocusable = false;
    this->bDiscardNonOwnerInput = false;
    this->bCaptureKeyboardInput = true;
    this->bCaptureMouseInput = true;
    this->bCaptureGamepadInput = true;
    this->bCaptureTouchInput = true;
    this->bIsSplitscreenLayoutModified = false;
    this->bShowDefaultMouseCursor = true;
    this->bBlurLesserMovies = false;
    this->bHideLesserMovies = false;
    this->bIsPriorityBlurred = false;
    this->bIsPriorityHidden = false;
    this->bIgnoreVisibilityEffect = false;
    this->bIgnoreBlurEffect = false;
    this->bRefreshed = false;
    this->bPerformHitTest = false;
    this->bCacheThisDefinition = false;
    this->bSkipUnnamedObjectsDuringPopulation = false;
    this->HitTestType = GFxHitTestType::HitTest_Bounds;
    this->RenderTexture = NULL;
    this->ExternalInterface = NULL;
    this->RenderTextureMode = EGFxRenderTextureMode::Opaque;
    this->Priority = 0;
    this->SplitscreenLayoutYAdjust = 0;
    this->bIgnoresSafeFrameScaling = false;
    this->bIgnoresHDRCalibration = false;
}

