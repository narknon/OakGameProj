#include "GbxDialogComponent.h"
#include "Net/UnrealNetwork.h"

class UDialogPerformanceData;
class UDialogStyle;

void UGbxDialogComponent::StopPerformance_Implementation(int32 DialogThreadID, bool bIncludeDeathDialog) {
}

void UGbxDialogComponent::StartPerformance_Implementation(int32 DialogThreadID, int32 DialogSequenceID, UDialogPerformanceData* Performance) {
}

void UGbxDialogComponent::OnRep_InitialDialogInProgress() {
}

bool UGbxDialogComponent::IsSpeakerClearToPlayDialog(UDialogStyle* ProposedStyle, bool bProposingEcho, FDialogConversation ProposedConversation) const {
    return false;
}

bool UGbxDialogComponent::IsSpeakerActive(bool bIncludePendingVO) const {
    return false;
}

void UGbxDialogComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UGbxDialogComponent, NameTag);
    DOREPLIFETIME(UGbxDialogComponent, bTransientEchoSpeaker);
    DOREPLIFETIME(UGbxDialogComponent, bSpeakDirectlyToPlayer);
    DOREPLIFETIME(UGbxDialogComponent, DirectSpeakerTarget);
    DOREPLIFETIME(UGbxDialogComponent, bPositional);
    DOREPLIFETIME(UGbxDialogComponent, bDistributedSpeaker);
    DOREPLIFETIME(UGbxDialogComponent, InitialDialogInProgress);
}

UGbxDialogComponent::UGbxDialogComponent() {
    this->NameTag = NULL;
    this->bPureEchoSpeaker = false;
    this->DistributedAudioComponent = NULL;
    this->bTransientEchoSpeaker = false;
    this->TransientEchoSpeakerIdleTime = 0.00f;
    this->bSpeakDirectlyToPlayer = false;
    this->DirectSpeakerTarget = NULL;
    this->bPositional = true;
    this->bDistributedSpeaker = false;
}

