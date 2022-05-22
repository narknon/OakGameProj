#include "GbxLevelSequenceActor.h"
#include "Net/UnrealNetwork.h"
#include "GameplayTasksComponent.h"

void AGbxLevelSequenceActor::Stop() {
}

void AGbxLevelSequenceActor::SetPlayRate(float PlayRate) {
}

void AGbxLevelSequenceActor::PlayLooping(int32 NumLoops) {
}

void AGbxLevelSequenceActor::PlayFromStart() {
}

void AGbxLevelSequenceActor::Play() {
}

void AGbxLevelSequenceActor::Pause() {
}

void AGbxLevelSequenceActor::OnRep_ReplicatedCutsceneSkip() {
}

void AGbxLevelSequenceActor::OnLevelSequenceStop() {
}

void AGbxLevelSequenceActor::OnLevelSequencePlay() {
}

void AGbxLevelSequenceActor::OnLevelSequencePause() {
}

void AGbxLevelSequenceActor::OnLevelSequenceFinished() {
}

bool AGbxLevelSequenceActor::IsPlaying() const {
    return false;
}

bool AGbxLevelSequenceActor::IsPaused() const {
    return false;
}

bool AGbxLevelSequenceActor::IsFinished() const {
    return false;
}

void AGbxLevelSequenceActor::GoToEndAndStop() {
}

float AGbxLevelSequenceActor::GetPlayRate() const {
    return 0.0f;
}

void AGbxLevelSequenceActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxLevelSequenceActor, ReplicatedLevelSequence);
    DOREPLIFETIME(AGbxLevelSequenceActor, ReplicatedPlaybackStatus);
    DOREPLIFETIME(AGbxLevelSequenceActor, bReplicatedReversePlayback);
    DOREPLIFETIME(AGbxLevelSequenceActor, ReplicatedPlaybackPosition);
    DOREPLIFETIME(AGbxLevelSequenceActor, ReplicatedPlaybackRate);
    DOREPLIFETIME(AGbxLevelSequenceActor, ReplicatedLoopCount);
    DOREPLIFETIME(AGbxLevelSequenceActor, BoundActors);
    DOREPLIFETIME(AGbxLevelSequenceActor, bPendingReplicatedCutsceneSkip);
    DOREPLIFETIME(AGbxLevelSequenceActor, bWasCutsceneSkipped);
}

AGbxLevelSequenceActor::AGbxLevelSequenceActor() {
    this->GameplayTasksComponent = CreateDefaultSubobject<UGameplayTasksComponent>(TEXT("GameplayTasks"));
    this->GbxLevelSequencePlayer = NULL;
    this->ReplicatedPlaybackStatus = EMovieScenePlayerStatus::Stopped;
    this->bReplicatedReversePlayback = false;
    this->ReplicatedPlaybackPosition = 0.00f;
    this->ReplicatedPlaybackRate = 1.00f;
    this->ReplicatedLoopCount = 0;
    this->bIgnoreReplicatedPlaybackState = false;
    this->bPendingReplicatedCutsceneSkip = false;
    this->bWasCutsceneSkipped = false;
}

