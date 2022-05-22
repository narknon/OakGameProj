#pragma once
#include "CoreMinimal.h"
#include "OakCinematicActor.h"
#include "LoadedBTSMediaTextureDelegate.h"
#include "BehindTheScenesMediaPlayerActor.generated.h"

class UTexture2D;
class UBehindTheScenesMediaContainer;

UCLASS(Abstract)
class OAKGAME_API ABehindTheScenesMediaPlayerActor : public AOakCinematicActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TSoftObjectPtr<UTexture2D> TextureBeingLoaded;
    
public:
    ABehindTheScenesMediaPlayerActor();
    UFUNCTION()
    void OnBTSMediaTextureLoaded();
    
    UFUNCTION(BlueprintCallable)
    FString GetLanguageName();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesMenuRewindMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesMenuPlayPauseMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesMenuOpened();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesMenuFastForwardMovie();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesMenuClosed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BehindTheScenesContentSelected(UBehindTheScenesMediaContainer* MediaContainer);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadBTSMediaTexture2D(const TSoftObjectPtr<UTexture2D> TextureToLoad, const FLoadedBTSMediaTexture& LoadedDelegate);
    
};

