#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "EGbxDialogInterruptStrategy.h"
#include "EGbxDialogSocialStrategy.h"
#include "DialogStyle.generated.h"

class UDialogAudioComponentProvider;

UCLASS()
class GBXDIALOG_API UDialogStyle : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGbxDialogSocialStrategy SocialStrategy;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptSamePriority;
    
    UPROPERTY(EditAnywhere)
    EGbxDialogInterruptStrategy InterruptStrategy;
    
    UPROPERTY(EditAnywhere)
    int32 Priority;
    
    UPROPERTY(EditAnywhere)
    int8 SubtitlePriority;
    
    UPROPERTY(EditAnywhere)
    float PatientWaitTime;
    
    UPROPERTY(EditAnywhere)
    float MaxWaitTime;
    
    UPROPERTY(EditAnywhere)
    bool bSpeakableWhenDead;
    
    UPROPERTY(EditAnywhere)
    bool bInterruptableByHighPriorityVox;
    
    UPROPERTY(EditAnywhere)
    bool bPlayableWhenPaused;
    
    UPROPERTY(EditAnywhere)
    bool bPlayableDuringCinematic;
    
    UPROPERTY(EditAnywhere)
    FName Kind;
    
    UPROPERTY(EditAnywhere)
    bool bCallout;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, Instanced)
    UDialogAudioComponentProvider* AudioComponentProvider;
    
    UPROPERTY(EditAnywhere)
    bool bLocalOnly;
    
    UDialogStyle();
};

