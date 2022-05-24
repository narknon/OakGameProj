#include "GbxGFxMovie.h"
#include "Templates/SubclassOf.h"

class AGbxPlayerController;
class UGbxGFxMovie;
class UTextureRenderTarget2D;
class APawn;
class UDataTable;

bool UGbxGFxMovie::TranslateWorldToLocal(const FVector& LocationWorldSpace, FVector2D& OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions) const {
    return false;
}

FVector2D UGbxGFxMovie::TranslateToScreen(const FVector2D& Point) const {
    return FVector2D{};
}

FVector2D UGbxGFxMovie::TranslateScreenToLocal(const FVector2D& Point, bool bUseMovieDimensions) const {
    return FVector2D{};
}

FBox2D UGbxGFxMovie::TranslateRectToScreen(const FBox2D& Rect) const {
    return FBox2D{};
}

void UGbxGFxMovie::SpawnMovie(AGbxPlayerController* NewGPCOwner, UTextureRenderTarget2D* RenderTarget) const {
}

UGbxGFxMovie* UGbxGFxMovie::SpawnGbxGFxMovie(AGbxPlayerController* GbxPlayerController, TSubclassOf<UGbxGFxMovie> MovieClass) const {
    return NULL;
}

void UGbxGFxMovie::SetViewportToPlayerScreen(AGbxPlayerController* PC) const {
}

void UGbxGFxMovie::SetOffsetDisplayTransform(const FTransform& Transform) const {
}

void UGbxGFxMovie::SetBaseDisplayTransform(const FTransform& Transform) const {
}

void UGbxGFxMovie::SetAudioEnabled(bool bEnabled) const {
}

void UGbxGFxMovie::SetAnchor(const FGbxGFxAnchor& Anchor) const {
}

bool UGbxGFxMovie::RunUIEventAudio(FName EventName, const FString& ProviderHistory) const {
    return false;
}

FVector2D UGbxGFxMovie::GetViewportOffset() const {
    return FVector2D{};
}

FVector2D UGbxGFxMovie::GetViewportDimensions() const {
    return FVector2D{};
}

FVector2D UGbxGFxMovie::GetStageDimensions() const {
    return FVector2D{};
}

APawn* UGbxGFxMovie::GetOwningPlayerPawn() const {
    return NULL;
}

AGbxPlayerController* UGbxGFxMovie::GetOwningPlayerController() const {
    return NULL;
}

FTransform UGbxGFxMovie::GetOffsetDisplayTransform() const {
    return FTransform{};
}

FVector2D UGbxGFxMovie::GetMovieDimensions() const {
    return FVector2D{};
}

FTransform UGbxGFxMovie::GetBaseDisplayTransform() const {
    return FTransform{};
}

void UGbxGFxMovie::extTransitionComplete() const {
}

void UGbxGFxMovie::extAnimationFinished(const FString& TargetName) const {
}

void UGbxGFxMovie::ApplyNewAudioSettings(UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation) const {
}

UGbxGFxMovie::UGbxGFxMovie() {
    this->MovieData = NULL;
    this->ScaleModeType = EGFxScaleMode::NoBorder;
    this->AlignmentType = EGFxAlign::Center;
    this->bAnchorToViewport = false;
    this->AudioDataTable = NULL;
    this->GetChildStrategy = EGbxGFxMovieGetChildStrategy::Default;
    this->CachedStage = NULL;
    this->GbxRoot = NULL;
    this->GetChildRoot = NULL;
    this->bIsTransitioning = false;
    this->TransitionTimeout = 0.00f;
    this->OwningGPC = NULL;
    this->bGbxMovieStarted = false;
}

