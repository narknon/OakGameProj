#include "AnimNotifyState_SoftAlign.h"

UAnimNotifyState_SoftAlign::UAnimNotifyState_SoftAlign() {
    this->Type = EAnimNotifyAlignType::Self;
    this->bAffectsLocation = true;
    this->bAffectsRotation = true;
    this->PartnerName = TEXT("Partner");
    this->ActionSlotName = TEXT("FullBody");
}

