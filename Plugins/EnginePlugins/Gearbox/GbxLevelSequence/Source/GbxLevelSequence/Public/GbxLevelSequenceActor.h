#pragma once
#include "CoreMinimal.h"
#include "GameplayTaskOwnerInterface.h"
#include "LevelSequenceActor.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSequencePlayer.h"
#include "MovieSceneFwd.h"
#include "GbxLevelSequenceBindingSlot.h"
#include "GbxLevelSequenceBoundActorSlot.h"
#include "GbxLevelSequenceActor.generated.h"

class UGbxLevelSequencePlayer;
class UGameplayTasksComponent;

UCLASS()
class GBXLEVELSEQUENCE_API AGbxLevelSequenceActor : public ALevelSequenceActor, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnPlay;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnPause;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnFinished;
    
    UPROPERTY(BlueprintAssignable)
    FOnMovieSceneSequencePlayerEvent OnStop;
    
    UPROPERTY(BlueprintReadOnly, Export)
    UGameplayTasksComponent* GameplayTasksComponent;
    
    UPROPERTY()
    UGbxLevelSequencePlayer* GbxLevelSequencePlayer;
    
    UPROPERTY(Transient)
    TArray<FGbxLevelSequenceBindingSlot> BindingSlots;
    
    UPROPERTY(Replicated)
    FSoftObjectPath ReplicatedLevelSequence;
    
    UPROPERTY(Replicated)
    TEnumAsByte<EMovieScenePlayerStatus::Type> ReplicatedPlaybackStatus;
    
    UPROPERTY(Replicated)
    bool bReplicatedReversePlayback;
    
    UPROPERTY(Replicated)
    float ReplicatedPlaybackPosition;
    
    UPROPERTY(Replicated)
    float ReplicatedPlaybackRate;
    
    UPROPERTY(Replicated)
    int32 ReplicatedLoopCount;
    
    UPROPERTY(Replicated)
    TArray<FGbxLevelSequenceBoundActorSlot> BoundActors;
    
    UPROPERTY(Transient)
    bool bIgnoreReplicatedPlaybackState;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_ReplicatedCutsceneSkip)
    bool bPendingReplicatedCutsceneSkip;
    
    UPROPERTY(Replicated, Transient)
    bool bWasCutsceneSkipped;
    
    AGbxLevelSequenceActor();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void Stop();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayRate(float PlayRate);
    
    UFUNCTION(BlueprintCallable)
    void PlayLooping(int32 NumLoops);
    
    UFUNCTION(BlueprintCallable)
    void PlayFromStart();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
private:
    UFUNCTION()
    void OnRep_ReplicatedCutsceneSkip();
    
public:
    UFUNCTION()
    void OnLevelSequenceStop();
    
    UFUNCTION()
    void OnLevelSequencePlay();
    
    UFUNCTION()
    void OnLevelSequencePause();
    
    UFUNCTION()
    void OnLevelSequenceFinished();
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintCallable)
    void GoToEndAndStop();
    
    UFUNCTION(BlueprintPure)
    float GetPlayRate() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

