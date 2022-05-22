#pragma once
#include "CoreMinimal.h"
#include "GbxGFxMenu.h"
#include "GbxGFxMediaPlayerConfig.h"
#include "GFxFullScreenMovieMenu.generated.h"

class UMediaSource;
class UGbxGFxMediaPlayer;

UCLASS()
class UGFxFullScreenMovieMenu : public UGbxGFxMenu {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxGFxMediaPlayerConfig GFxMediaPlayerConfig;
    
private:
    UPROPERTY(Transient)
    UGbxGFxMediaPlayer* GFxMediaPlayer;
    
    UPROPERTY(Transient)
    UMediaSource* MediaSourceObject;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UMediaSource> MediaSourceSoftPtr;
    
    UPROPERTY(Transient)
    bool bScaleformHasStarted;
    
    UPROPERTY(Transient)
    bool bMoviePlaybackComplete;
    
public:
    UGFxFullScreenMovieMenu();
private:
    UFUNCTION()
    void OnMoviePlaybackComplete() const;
    
};

