#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "EWwiseNotifyComponentMethod.h"
#include "ActiveLoopingSoundNotifyData.h"
#include "AnimNotifyState_LoopingSound.generated.h"

class UWwiseEvent;

UCLASS(CollapseCategories, EditInlineNew)
class GBXAUDIO_API UAnimNotifyState_LoopingSound : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopEvent;
    
    UPROPERTY(EditAnywhere)
    EWwiseNotifyComponentMethod PlaybackMethod;
    
    UPROPERTY(EditAnywhere)
    FName WwiseComponentTag;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    bool bAttachToOwner;
    
    UPROPERTY(EditAnywhere)
    float EmitterRadius;
    
    UPROPERTY(Transient)
    TMap<uint32, FActiveLoopingSoundNotifyData> ActivePlaybackInstances;
    
    UAnimNotifyState_LoopingSound();
};

