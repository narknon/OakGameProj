#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MusicSequencerComponent.generated.h"

class UWwiseEvent;
class UWwiseAudioComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMusicSequencerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BPM;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float SequencerLatencyInSeconds;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bKillLateEvents;
    
private:
    UPROPERTY(Transient)
    bool bRegisteredWithAudioDevice;
    
public:
    UMusicSequencerComponent();
    UFUNCTION(BlueprintCallable)
    void StopSequence();
    
    UFUNCTION(BlueprintCallable)
    void PostSequenceEvent(UWwiseAudioComponent* WwiseComponent, UWwiseEvent* WwiseEvent, int32 Note, int32 Velocity, int32 Channel, float StartBeat, float Duration);
    
    UFUNCTION(BlueprintCallable)
    void PlaySequence();
    
    UFUNCTION(BlueprintCallable)
    void PauseSequence();
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying();
    
    UFUNCTION(BlueprintPure)
    float GetRealTimeUntilBeat(float Beat);
    
    UFUNCTION(BlueprintPure)
    float GetCurrentBeat();
    
};

