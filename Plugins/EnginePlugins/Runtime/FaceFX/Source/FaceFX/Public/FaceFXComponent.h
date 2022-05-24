#pragma once
#include "CoreMinimal.h"
#include "OnFaceFXEventSignatureDelegate.h"
#include "Components/ActorComponent.h"
#include "OnFaceFXAudioStartEventSignatureDelegate.h"
#include "FaceFXEntry.h"
#include "FaceFXAnimId.h"
#include "FaceFXComponent.generated.h"

class UFaceFXAudioComponent;
class UObject;
class USkeletalMeshComponent;
class UFaceFXActor;
class UFaceFXAnim;
class UFaceFXCharacter;

UCLASS(BlueprintType, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FACEFX_API UFaceFXComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOnFaceFXAudioStartEventSignature OnPlaybackAudioStart;
    
    UPROPERTY(BlueprintAssignable)
    FOnFaceFXEventSignature OnPlaybackStopped;
    
private:
    UPROPERTY()
    TArray<FFaceFXEntry> Entries;
    
public:
    UFaceFXComponent();
    UFUNCTION(BlueprintCallable)
    void StopAll();
    
    UFUNCTION(BlueprintCallable)
    bool Stop(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Setup(USkeletalMeshComponent* SkelMeshComp, UFaceFXAudioComponent* AudioComponent, const UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Resume(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool PlayById(FName Group, FName AnimName, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Play(UFaceFXAnim* Animation, USkeletalMeshComponent* SkelMeshComp, bool Loop, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool Pause(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
private:
    UFUNCTION()
    void OnCharacterPlaybackStopped(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId);
    
    UFUNCTION()
    void OnCharacterAudioStart(UFaceFXCharacter* Character, const FFaceFXAnimId& AnimId, bool IsAudioStarted, UFaceFXAudioComponent* AudioComponentStartedOn);
    
public:
    UFUNCTION(BlueprintCallable)
    bool JumpToById(float Position, bool NewPause, FName Group, FName AnimName, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintCallable)
    bool JumpTo(float Position, bool NewPause, UFaceFXAnim* Animation, bool LoopAnimation, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation(const FFaceFXAnimId& AnimId, USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPlaying(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
    UFUNCTION(BlueprintPure)
    bool IsPaused(USkeletalMeshComponent* SkelMeshComp, const UObject* Caller) const;
    
    UFUNCTION(BlueprintCallable)
    float GetFaceFXBlendWeight(USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime);
    
};

