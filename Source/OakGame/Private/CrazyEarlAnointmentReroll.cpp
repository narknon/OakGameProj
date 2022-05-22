#include "CrazyEarlAnointmentReroll.h"
#include "Net/UnrealNetwork.h"

class AActor;
class AOakPlayerController;

void ACrazyEarlAnointmentReroll::OnReRolledInventorySourceSet(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor) {
}

void ACrazyEarlAnointmentReroll::OnReRolledInventoryActorReady(AOakPlayerController* ReRolledOwner, AActor* ReRolledInventoryActor) {
}


void ACrazyEarlAnointmentReroll::OnRep_ItemPreviewActor() {
}


void ACrazyEarlAnointmentReroll::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ACrazyEarlAnointmentReroll, SourceItemActor);
}

ACrazyEarlAnointmentReroll::ACrazyEarlAnointmentReroll() {
    this->ItemPreviewPlayer = NULL;
    this->SourceItemActor = NULL;
    this->ItemPreviewActor = NULL;
}

