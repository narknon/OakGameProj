#include "GFxBuddyWidgetContainer.h"

class AOakPlayerState;
class AOakCharacter;
class AGbxCharacter;

void UGFxBuddyWidgetContainer::OnPlayerStateUpdated() const {
}

void UGFxBuddyWidgetContainer::OnPlayerStateRemoved() const {
}

void UGFxBuddyWidgetContainer::OnPlayerStateAdded(AOakPlayerState* NewPlayerState) const {
}

void UGFxBuddyWidgetContainer::OnPetSpawnStateChanged(AOakCharacter* Pet) const {
}

void UGFxBuddyWidgetContainer::NotifyPrimaryCharacterChanged(AGbxCharacter* NewPrimaryCharacter) const {
}

void UGFxBuddyWidgetContainer::extSlideFinished() const {
}

void UGFxBuddyWidgetContainer::extFanfareAnimationFinished(const FString& TargetName) const {
}

UGFxBuddyWidgetContainer::UGFxBuddyWidgetContainer() {
    this->PlayerBuddyWidgets[0] = NULL;
    this->PlayerBuddyWidgets[1] = NULL;
    this->PlayerBuddyWidgets[2] = NULL;
    this->PetBuddyWidget = NULL;
    this->PlayerGodRays[0] = NULL;
    this->PlayerGodRays[1] = NULL;
    this->PlayerGodRays[2] = NULL;
    this->PetGodRays = NULL;
    this->AnimState = EBuddyWidgetContainerAnimState::Inactive;
}

