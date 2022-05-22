#include "FaceFXComponent.h"

class UObject;
class USkeletalMeshComponent;
class UFaceFXAnim;
class UFaceFXAudioComponent;
class UFaceFXActor;
class UFaceFXCharacter;

void UFaceFXComponent::StopAll() {
}

bool UFaceFXComponent::Stop(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Setup(USkeletalMeshComponent* SkelMeshComp, UFaceFXAudioComponent* AudioComponent, const UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Resume(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::PlayById(FName Group, FName AnimName, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Play(UFaceFXAnim* Animation, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::Pause(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

void UFaceFXComponent::OnCharacterPlaybackStopped(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId) {
}

void UFaceFXComponent::OnCharacterAudioStart(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, bool IsAudioStarted, UFaceFXAudioComponent* AudioComponentStartedOn) {
}

bool UFaceFXComponent::JumpToById(float Position, bool NewPause, FName Group, FName AnimName, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::JumpTo(float Position, bool NewPause, UFaceFXAnim* Animation, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) {
    return false;
}

bool UFaceFXComponent::IsPlayingAnimation(const FFaceFXAnimId& AnimId, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}

bool UFaceFXComponent::IsPlaying(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}

bool UFaceFXComponent::IsPaused(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const {
    return false;
}

float UFaceFXComponent::GetFaceFXBlendWeight(USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime) {
    return 0.0f;
}

UFaceFXComponent::UFaceFXComponent() {
}

