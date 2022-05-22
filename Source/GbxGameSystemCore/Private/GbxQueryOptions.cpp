#include "GbxQueryOptions.h"

FGbxQueryOptions::FGbxQueryOptions() {
    this->OwnerLocationUse = EQueryOwnerLocationUse::Never;
    this->ReplaceLastResultThreshold = 0.00f;
    this->bReplaceLastResult = false;
    this->bKeepValidValues = false;
    this->MinUpdatePeriod = 0.00f;
    this->PauseUpdatesWhenNotPingedForTime = 0.00f;
    this->bUpdateAlways = false;
    this->WhenToDoFullQueryUpdates = ETimedUpdateBehavior::DontDoTimedUpdates;
    this->bCanUpdateWhileActive = false;
    this->bUpdateWhenOwnerMoves = false;
    this->bUpdateWhenPrimaryContextMoves = false;
    this->bUpdateOrigin = false;
    this->bOnlyUpdateWhenCanPath = false;
    this->bUpdateWhenHotSpotsListChanges = false;
}

