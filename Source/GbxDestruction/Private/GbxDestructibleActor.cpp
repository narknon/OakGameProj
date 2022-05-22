#include "GbxDestructibleActor.h"
#include "Net/UnrealNetwork.h"

void AGbxDestructibleActor::SetFracturable(bool bFracturable) {
}

void AGbxDestructibleActor::OnRep_TransformBuffer() {
}

void AGbxDestructibleActor::OnRep_SyncID() {
}

void AGbxDestructibleActor::OnRep_FractureBuffer() {
}

void AGbxDestructibleActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AGbxDestructibleActor, FractureBuffer);
    DOREPLIFETIME(AGbxDestructibleActor, TransformBuffer);
    DOREPLIFETIME(AGbxDestructibleActor, SyncID);
}

AGbxDestructibleActor::AGbxDestructibleActor() {
    this->SyncID = 0;
}

