#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "EWwiseNotifyComponentMethod.h"
#include "EAcousticsMode.h"
#include "AnimNotify_WwiseEvent.generated.h"

class UWwiseEvent;

UCLASS(CollapseCategories)
class GBXAUDIO_API UAnimNotify_WwiseEvent : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UWwiseEvent* WwiseEvent;
    
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
    
    UPROPERTY(EditAnywhere)
    bool bIgnorePerspective;
    
    UPROPERTY(EditAnywhere)
    EAcousticsMode AcousticsMode;
    
    UAnimNotify_WwiseEvent();
};

