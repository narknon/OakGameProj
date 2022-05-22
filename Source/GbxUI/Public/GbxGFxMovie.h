#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EGbxGFxMovieGetChildStrategy.h"
#include "GFxMoviePlayer.h"
#include "GbxGFxAnchor.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EGFxScaleMode.h"
#include "EGFxAlign.h"
#include "GbxGFxMovieClipAppendix.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EUIAudioSettingOperation.h"
#include "GbxGFxMovie.generated.h"

class USwfMovie;
class UDataTable;
class UGbxGFxMovie;
class UGbxGFxObject;
class AGbxPlayerController;
class UTextureRenderTarget2D;
class APawn;

UCLASS()
class GBXUI_API UGbxGFxMovie : public UGFxMoviePlayer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    USwfMovie* MovieData;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGFxScaleMode::Type> ScaleModeType;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EGFxAlign::Type> AlignmentType;
    
    UPROPERTY(EditAnywhere)
    bool bAnchorToViewport;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxAnchor AnchorData;
    
    UPROPERTY(EditAnywhere)
    UDataTable* AudioDataTable;
    
    UPROPERTY(EditAnywhere)
    FGbxGFxMovieClipAppendix GetChildAppendix;
    
    UPROPERTY(EditAnywhere)
    EGbxGFxMovieGetChildStrategy GetChildStrategy;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CachedStage;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UGbxGFxObject* GbxRoot;
    
    UPROPERTY(Transient)
    UGbxGFxObject* GetChildRoot;
    
    UPROPERTY(Transient)
    FVector2D CachedGbxRootPosition;
    
    UPROPERTY(Transient)
    bool bIsTransitioning;
    
    UPROPERTY(Transient)
    float TransitionTimeout;
    
    UPROPERTY(Transient)
    AGbxPlayerController* OwningGPC;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxObject*> Tickables;
    
    UPROPERTY(Transient)
    bool bGbxMovieStarted;
    
    UGbxGFxMovie();
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool TranslateWorldToLocal(const FVector& LocationWorldSpace, FVector2D& OutPositionLocal, bool bPlayerViewportRelative, bool bUseMovieDimensions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector2D TranslateToScreen(const FVector2D& Point) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector2D TranslateScreenToLocal(const FVector2D& Point, bool bUseMovieDimensions) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FBox2D TranslateRectToScreen(const FBox2D& Rect) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SpawnMovie(AGbxPlayerController* NewGPCOwner, UTextureRenderTarget2D* RenderTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    static UGbxGFxMovie* SpawnGbxGFxMovie(AGbxPlayerController* GbxPlayerController, TSubclassOf<UGbxGFxMovie> MovieClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetViewportToPlayerScreen(AGbxPlayerController* PC) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetOffsetDisplayTransform(const FTransform& Transform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetBaseDisplayTransform(const FTransform& Transform) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAudioEnabled(bool bEnabled) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetAnchor(const FGbxGFxAnchor& Anchor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool RunUIEventAudio(FName EventName, const FString& ProviderHistory) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector2D GetViewportOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector2D GetViewportDimensions() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FVector2D GetStageDimensions() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    APawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    AGbxPlayerController* GetOwningPlayerController() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetOffsetDisplayTransform() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetMovieDimensions() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetBaseDisplayTransform() const;
    
    UFUNCTION()
    void extTransitionComplete() const;
    
    UFUNCTION()
    void extAnimationFinished(const FString& TargetName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void ApplyNewAudioSettings(UDataTable* NewDataTable, EUIAudioSettingOperation MergeOperation) const;
    
};

