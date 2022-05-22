#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "MissionObserverInterface.h"
#include "CinematicState.h"
#include "OnCinematicBrainEventDelegate.h"
#include "OakCinematicBrain.generated.h"

class ULevelSequencePlayer;
class UOakCinematicBrainData;
class UMediaTexture;
class UWwiseMediaAudioSinkProvider;
class UMediaPlayer;
class UOakCinematicTag;
class UMediaSource;

UCLASS()
class OAKGAME_API AOakCinematicBrain : public AInfo, public IMissionObserverInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnCinematicBrainEvent OnCinematicPlay;
    
    UPROPERTY(BlueprintAssignable)
    FOnCinematicBrainEvent OnCinematicStop;
    
    UPROPERTY(EditAnywhere, Replicated)
    UOakCinematicBrainData* CinematicData;
    
protected:
    UPROPERTY(Transient)
    ULevelSequencePlayer* SequencePlayer;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_CinematicState)
    FCinematicState CinematicState;
    
    UPROPERTY(Transient)
    UMediaTexture* MovieTexture;
    
    UPROPERTY(Transient)
    UWwiseMediaAudioSinkProvider* MovieAudioSinkProvider;
    
    UPROPERTY(Transient)
    UMediaPlayer* MoviePlayer;
    
public:
    AOakCinematicBrain();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PlayCinematic(UOakCinematicTag* CinematicTag);
    
protected:
    UFUNCTION()
    void OnSequenceStop();
    
    UFUNCTION()
    void OnRep_CinematicState();
    
    UFUNCTION()
    void OnMovieMediaOpenFailed(const FString& DeviceUrl);
    
    UFUNCTION()
    void OnMovieMediaOpened(const FString& DeviceUrl);
    
    UFUNCTION()
    void OnMovieMediaClosed();
    
    UFUNCTION()
    void OnMovieEndReached();
    
    UFUNCTION()
    void OnMovieEndDelayed();
    
    UFUNCTION()
    void OnMediaAssetLoaded(UMediaSource* MovieSource);
    
    UFUNCTION()
    void OnIntroComplete();
    
    
    // Fix for true pure virtual functions not being implemented
};

