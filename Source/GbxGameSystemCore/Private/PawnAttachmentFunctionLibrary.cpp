#include "PawnAttachmentFunctionLibrary.h"

class AActor;
class APawn;
class UPawnAttachSlotComponent;

void UPawnAttachmentFunctionLibrary::RequestDetachPawnFromSlot(AActor* Actor, FName SlotName) {
}

void UPawnAttachmentFunctionLibrary::RequestDetachPawnFromActor(APawn* Pawn) {
}

FPawnAttachmentQueryResult UPawnAttachmentFunctionLibrary::QueryPawnAttachment(APawn* Pawn) {
    return FPawnAttachmentQueryResult{};
}

UPawnAttachSlotComponent* UPawnAttachmentFunctionLibrary::FindPawnAttachSlotComponent(APawn* Pawn) {
    return NULL;
}

void UPawnAttachmentFunctionLibrary::DetachPawnFromSlot(AActor* Actor, FName SlotName, bool bInstant) {
}

void UPawnAttachmentFunctionLibrary::DetachPawnFromActor(APawn* Pawn, bool bInstant) {
}

void UPawnAttachmentFunctionLibrary::AttachPawnToSlot(AActor* Actor, FName SlotName, APawn* Pawn, bool bInstant) {
}

UPawnAttachmentFunctionLibrary::UPawnAttachmentFunctionLibrary() {
}

