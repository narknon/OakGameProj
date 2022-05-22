#include "GbxAnimInstance.h"

class UGbxAnimTable;
class UAnimSequence;

UAnimSequence* UGbxAnimInstance::GetAnimTableSequence(UGbxAnimTable* AnimTable) const {
    return NULL;
}

bool UGbxAnimInstance::CanUseAnimTable(UGbxAnimTable* AnimTable) const {
    return false;
}

UGbxAnimInstance::UGbxAnimInstance() {
    this->GbxSkeletalMeshComponent = NULL;
    this->bEarlyBindBoneSetDelegates = false;
}

