#include "GFxTrophyCaseMenu.h"

class UChallenge;

void UGFxTrophyCaseMenu::OnTrophyCaseViewingStateChanged(ETrophyCaseViewingState NewViewingState) const {
}

void UGFxTrophyCaseMenu::OnTrophyCaseCurrentTrophySetChanged(const FText& TrophySetName, const FText& TrophySetDescription, int32 NumComplete, int32 NumTotal) const {
}

void UGFxTrophyCaseMenu::OnTrophyCaseCurrentTrophyGroupChanged(const FText& TrophyGroupName, const FText& TrophyGroupDescription, int32 NumComplete, int32 NumTotal) const {
}

void UGFxTrophyCaseMenu::OnTrophyCaseCurrentTrophyChanged(const FText& TrophyName, const FText& TrophyDescription, bool bLocked, int32 CompletedProgressLevel, int32 MaxProgressLevel, const UChallenge* AssociatedChallenge) const {
}

UGFxTrophyCaseMenu::UGFxTrophyCaseMenu() {
    this->CurrentViewingState = ETrophyCaseViewingState::ViewingNone;
    this->CachedSetPercent = 0;
    this->bMenuContentReady = false;
    this->bGameDataReady = false;
    this->LargeNavClip = NULL;
    this->SmallNavClip = NULL;
    this->TrophyPanel = NULL;
}

