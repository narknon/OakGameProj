#include "GFxInWorldIconContainer.h"

class AOakPlayerState;
class UPlayerAlertData;
class AActor;
class AGbxCharacter;

void UGFxInWorldIconContainer::UnregisterTarget(const FHUDInWorldIconTargetInfo& TargetInfo) const {
}

void UGFxInWorldIconContainer::RegisterTarget(const FHUDInWorldIconTargetInfo& TargetInfo) const {
}

void UGFxInWorldIconContainer::OnRemovePlayerAlert(const FUniqueNetIdRepl& Instigator) const {
}

void UGFxInWorldIconContainer::OnPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const {
}

void UGFxInWorldIconContainer::OnPetRenamed(const FText& NewName) const {
}



void UGFxInWorldIconContainer::OnCreatePlayerAlert(const FUniqueNetIdRepl& Instigator, AActor* Actor, FVector AlertLocation, const UPlayerAlertData* AlertData) const {
}

void UGFxInWorldIconContainer::AddNewNameplateForPlayerState(AOakPlayerState* NewPlayerState) const {
}

UGFxInWorldIconContainer::UGFxInWorldIconContainer() {
    this->OverheadNameplateIconData = NULL;
    this->CustomWaypointIconData = NULL;
    this->SplitscreenOffset = 950.00f;
    this->MinSplitscreenYValue = -350.00f;
    this->MaxTopPlayerSplitscreenYValue = 430.00f;
    this->IconSnapThreshold = 100.00f;
    this->SmoothTransitionDuration = 0.10f;
    this->NextIconInstId = 0;
    this->ContainerObject = NULL;
    this->RangeCutoff = 1000000.00f;
    this->MaxTransitionToMapTime = 0.25f;
    this->PetNameplate = NULL;
    this->bNeedRefreshTrackedMissionIcons = false;
}

