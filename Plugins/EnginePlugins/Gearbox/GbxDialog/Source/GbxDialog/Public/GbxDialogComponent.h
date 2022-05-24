#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnStartedDialogPerformanceDelegate.h"
#include "CurrentDialogPerformanceInfo.h"
#include "DialogScriptPinnedRef.h"
#include "InitialDialogInProgress.h"
#include "DialogConversation.h"
#include "GbxDialogComponent.generated.h"

class UDialogNameTag;
class UWwiseAudioComponent;
class UDialogScriptData;
class APlayerController;
class UDialogPerformanceData;
class UDialogStyle;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXDIALOG_API UGbxDialogComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UDialogNameTag*> RandomNameTags;
    
    UPROPERTY(EditAnywhere)
    TArray<UDialogScriptData*> DialogScripts;
    
    UPROPERTY(BlueprintAssignable)
    FOnStartedDialogPerformance OnStartedPerformance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated)
    UDialogNameTag* NameTag;
    
    UPROPERTY(Transient)
    FCurrentDialogPerformanceInfo CurrentPerformance;
    
    UPROPERTY(Transient)
    FCurrentDialogPerformanceInfo PendingPerformance;
    
    UPROPERTY(Transient)
    TArray<FDialogScriptPinnedRef> PinnedScripts;
    
    UPROPERTY(Transient)
    bool bPureEchoSpeaker;
    
    UPROPERTY(Export, Transient)
    UWwiseAudioComponent* DistributedAudioComponent;
    
    UPROPERTY(Replicated, Transient)
    bool bTransientEchoSpeaker;
    
    UPROPERTY(Transient)
    float TransientEchoSpeakerIdleTime;
    
    UPROPERTY(Replicated, Transient)
    bool bSpeakDirectlyToPlayer;
    
    UPROPERTY(Replicated, Transient)
    APlayerController* DirectSpeakerTarget;
    
protected:
    UPROPERTY(EditAnywhere, Replicated)
    bool bPositional;
    
    UPROPERTY(Replicated, Transient)
    bool bDistributedSpeaker;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_InitialDialogInProgress)
    FInitialDialogInProgress InitialDialogInProgress;
    
public:
    UGbxDialogComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(NetMulticast, Reliable)
    void StopPerformance(int32 DialogThreadID, bool bIncludeDeathDialog);
    
    UFUNCTION(NetMulticast, Reliable)
    void StartPerformance(int32 DialogThreadID, int32 DialogSequenceID, UDialogPerformanceData* Performance);
    
private:
    UFUNCTION()
    void OnRep_InitialDialogInProgress();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool IsSpeakerClearToPlayDialog(UDialogStyle* ProposedStyle, bool bProposingEcho, FDialogConversation ProposedConversation) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintPure)
    bool IsSpeakerActive(bool bIncludePendingVO) const;
    
};

