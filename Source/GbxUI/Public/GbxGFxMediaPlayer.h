#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxGFxMediaPlayerConfig.h"
#include "GbxGFxMaterialRenderer.h"
#include "GbxGFxMediaPlayer.generated.h"

class UMediaPlayer;

UCLASS()
class GBXUI_API UGbxGFxMediaPlayer : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGbxGFxMediaPlayerEvent);
    
    UPROPERTY(Transient)
    FGbxGFxMediaPlayerEvent OnMovieStartedPlaying;
    
    UPROPERTY(Transient)
    FGbxGFxMediaPlayerEvent OnMovieStoppedPlaying;
    
private:
    UPROPERTY(Transient)
    FGbxGFxMediaPlayerConfig PlayerConfig;
    
    UPROPERTY(Transient)
    FGbxGFxMaterialRenderer MaterialRenderer;
    
    UPROPERTY(Transient)
    UMediaPlayer* MediaPlayer;
    
public:
    UGbxGFxMediaPlayer();
private:
    UFUNCTION()
    void OnMovieTracksChanged();
    
    UFUNCTION()
    void OnMovieSeekCompleted();
    
    UFUNCTION()
    void OnMoviePlaybackSuspended();
    
    UFUNCTION()
    void OnMoviePlaybackResumed();
    
    UFUNCTION()
    void OnMovieMediaOpenFailed(const FString& FailedUrl);
    
    UFUNCTION()
    void OnMovieMediaOpened(const FString& OpenedUrl);
    
    UFUNCTION()
    void OnMovieMediaClosed();
    
    UFUNCTION()
    void OnMovieEndReached();
    
};

