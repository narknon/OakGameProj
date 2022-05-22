#include "GbxAction_NavAnim.h"

UGbxAction_NavAnim::UGbxAction_NavAnim() {
    this->EntryTime = 0.10f;
    this->BlendInTime = 0.10f;
    this->BlendOutTime = 0.10f;
    this->AnimSlot = TEXT("FullBody");
    this->bLerpLocation = true;
    this->bLerpRotation = true;
    this->bUseStretchy = true;
    this->NavAnim = NULL;
}

