#include "UsableComponent.h"

void UUsableComponent::SetUsableLocked(bool bLocked, FName Reason) {
}

void UUsableComponent::SetInteractionHeader(const FText& NewHeaderName) {
}

void UUsableComponent::ResetUseCount() {
}

FText UUsableComponent::K2_GetOptionalErrorText_Implementation() const {
    return FText::GetEmpty();
}

bool UUsableComponent::K2_CanBeUsed_Implementation(const FUsabilityQuery& Query) const {
    return false;
}

void UUsableComponent::GetValidPrimitiveComponentNames(TArray<FName>& ComponentNames) const {
}

FText UUsableComponent::GetInteractionHeader() const {
    return FText::GetEmpty();
}

UUsableComponent::UUsableComponent() {
    this->UsabilityData = NULL;
    this->bUseEnabledCondition = true;
    this->EnabledCondition = NULL;
    this->bCanBeUsedFromVehicle = false;
    this->bCanBeUsedFromMech = true;
    this->bCanOnlyBeUsedByOwner = false;
    this->bDefaultIsBackupPrimaryData = true;
    this->UsablePriority = 0;
    this->bWantsMaxUseCount = false;
    this->MaxUseCount = 0;
    this->CurrentUseCount = 0;
    this->bUseAngleRestriction = false;
    this->bRequiresNetAuthority = true;
}

