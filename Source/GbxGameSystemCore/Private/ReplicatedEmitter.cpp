#include "ReplicatedEmitter.h"
#include "Net/UnrealNetwork.h"

void AReplicatedEmitter::OnRep_TemplateOptions() {
}

void AReplicatedEmitter::OnRep_ReplicatedWwiseEvent() {
}

void AReplicatedEmitter::OnRep_ReplicatedVectorParams() {
}

void AReplicatedEmitter::OnRep_ReplicatedFloatParams() {
}

void AReplicatedEmitter::OnRep_ReplicatedColorParams() {
}

void AReplicatedEmitter::OnRep_OwnerNoSeeEmitter() {
}

void AReplicatedEmitter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AReplicatedEmitter, bOwnerNoSeeEmitter);
    DOREPLIFETIME(AReplicatedEmitter, TemplateOptions);
    DOREPLIFETIME(AReplicatedEmitter, ReplicatedFloatParams);
    DOREPLIFETIME(AReplicatedEmitter, ReplicatedVectorParams);
    DOREPLIFETIME(AReplicatedEmitter, ReplicatedColorParams);
    DOREPLIFETIME(AReplicatedEmitter, ReplicatedWwiseEvent);
}

AReplicatedEmitter::AReplicatedEmitter() {
    this->bOwnerNoSeeEmitter = false;
}

