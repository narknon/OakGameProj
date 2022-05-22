#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "EEchoPerformanceMode.h"
#include "GbxGFxMediaPlayerConfig.h"
#include "EECHOWidgetState.h"
#include "EVoiceOfGodSpeaker.h"
#include "GFxECHOWidget.generated.h"

class UGFxEchologWidgetBase;
class UGbxGFxObject;
class UGbxGFxMovie;
class UGbxGFxMediaPlayer;
class UCharacterEchoData;
class UPerformanceEchoData;

UCLASS()
class UGFxECHOWidget : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FString GFxKEY_SpeakerImage;
    
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
    
private:
    UPROPERTY(Transient)
    EECHOWidgetState CurrentState;
    
    UPROPERTY(Transient)
    UGbxGFxObject* CachedSpeakerImage;
    
    UPROPERTY(Transient)
    FString CachedMoodKeyframe;
    
    UPROPERTY(Transient)
    UGbxGFxMediaPlayer* MediaPlayer;
    
    UPROPERTY(Transient)
    bool bEchoIsPlaying;
    
    UPROPERTY(Transient)
    bool bMediaIsPlaying;
    
    UPROPERTY(Transient)
    bool bCloseMediaWhenEchoEnds;
    
    UPROPERTY(Transient)
    UGFxEchologWidgetBase* EchoWidgetBase;
    
    UPROPERTY(EditAnywhere)
    FString EchoStringID;
    
public:
    UGFxECHOWidget();
private:
    UFUNCTION()
    void OnMediaMovieStopped() const;
    
    UFUNCTION()
    void OnMediaMovieStarted() const;
    
    UFUNCTION()
    void OnEchoStarted(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, const FString& MoodKeyframe, const FString& VoGMoodKey, EVoiceOfGodSpeaker VoGSpeakerID, bool bIsNewEcho) const;
    
    UFUNCTION()
    void OnEchoFinished(UCharacterEchoData* CharacterData, UPerformanceEchoData* PerformanceData, bool bCompleted) const;
    
};

