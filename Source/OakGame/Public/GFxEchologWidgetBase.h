#pragma once
#include "CoreMinimal.h"
#include "EECHOLOGWidgetState.h"
#include "EEchoPerformanceMode.h"
#include "GbxGFxObject.h"
#include "GbxGFxMediaPlayerConfig.h"
#include "EVoiceOfGodSpeaker.h"
#include "GFxEchologWidgetBase.generated.h"

class UPerformanceEchoData;
class UGbxGFxMovie;
class UGbxGFxMediaPlayer;
class UCharacterEchoData;

UCLASS(NonTransient)
class OAKGAME_API UGFxEchologWidgetBase : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString GFxKEY_SpeakerImage;
    
    UPROPERTY()
    UGbxGFxObject* SkinWrapper;
    
    UPROPERTY()
    UGbxGFxObject* SpeakerImage;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_PassiveAnimation;
    
    UPROPERTY(EditAnywhere)
    FString GFxKEY_SpeakerName;
    
    UPROPERTY(EditAnywhere)
    EEchoPerformanceMode AssociatedPerformanceMode;
    
    UPROPERTY(Transient)
    UGbxGFxMovie* CurrentlyDisplayedMovie;
    
public:
    UPROPERTY(EditAnywhere)
    FGbxGFxMediaPlayerConfig MediaPlayerConfig;
    
    UPROPERTY(Transient)
    bool bEchoIsPlaying;
    
private:
    UPROPERTY(Transient)
    EECHOLOGWidgetState CurrentState;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CachedSpeakerImage;
    
    UPROPERTY(Transient)
    FString CachedMoodKeyframe;
    
    UPROPERTY(Transient)
    UGbxGFxMediaPlayer* MediaPlayer;
    
    UPROPERTY(Transient)
    bool bMediaIsPlaying;
    
    UPROPERTY(Transient)
    bool bCloseMediaWhenEchoEnds;
    
    UPROPERTY(Transient)
    bool bEchoIsShown;
    
public:
    UGFxEchologWidgetBase();
private:
    UFUNCTION()
    void OnMediaMovieStopped();
    
    UFUNCTION()
    void OnMediaMovieStarted();
    
    UFUNCTION()
    void OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEchoLog);
    
    UFUNCTION()
    void OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted);
    
};

