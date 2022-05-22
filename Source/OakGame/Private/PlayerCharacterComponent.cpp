#include "PlayerCharacterComponent.h"
#include "Net/UnrealNetwork.h"

class UPlayerCharacterComponentSlotData;
class UPlayerCharacterComponentAugmentData;

void UPlayerCharacterComponent::SetSlotAugment_Implementation(UPlayerCharacterComponentSlotData* Slot, UPlayerCharacterComponentAugmentData* Augment) {
}
bool UPlayerCharacterComponent::SetSlotAugment_Validate(UPlayerCharacterComponentSlotData* Slot, UPlayerCharacterComponentAugmentData* Augment) {
    return true;
}

bool UPlayerCharacterComponent::HasAnySlotAugment(UPlayerCharacterComponentSlotData* Slot) const {
    return false;
}

void UPlayerCharacterComponent::HandlePreInputActivation() {
}

void UPlayerCharacterComponent::HandleInputActivationEnd() {
}

void UPlayerCharacterComponent::HandleInputActivationBegin() {
}

UPlayerCharacterComponentAugmentData* UPlayerCharacterComponent::GetSlotAugment(UPlayerCharacterComponentSlotData* Slot) const {
    return NULL;
}

void UPlayerCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPlayerCharacterComponent, SlotItemList);
}

UPlayerCharacterComponent::UPlayerCharacterComponent() {
    this->CachedPlayer = NULL;
}

