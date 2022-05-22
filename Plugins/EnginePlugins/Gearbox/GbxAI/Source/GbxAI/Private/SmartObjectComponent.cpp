#include "SmartObjectComponent.h"

class AController;
class APawn;

void USmartObjectComponent::UnreserveEventSignature(APawn* User) {
}

void USmartObjectComponent::ToggleActionSet(FSmartObjectActionSet ActionSet) {
}

void USmartObjectComponent::SuccessEventSignature(APawn* User) {
}

void USmartObjectComponent::ReserveEventSignature(APawn* User) {
}

void USmartObjectComponent::OnActionEnded(EGbxActionEndState EndState, FGameplayTag ActionName, AController* User) {
}

void USmartObjectComponent::InterruptEventSignature(APawn* User) {
}

void USmartObjectComponent::GetAvailableSocketNames(TArray<FName>& Array) const {
}

void USmartObjectComponent::GetActionUsers(FGameplayTag ActionTag, TArray<APawn*>& OutUsers) const {
}

void USmartObjectComponent::EnableAllActions() {
}

void USmartObjectComponent::EnableAction(FGameplayTag ActionTag) {
}

void USmartObjectComponent::DisableAllActions() {
}

void USmartObjectComponent::DisableAction(FGameplayTag ActionTag) {
}

void USmartObjectComponent::BeginEventSignature(APawn* User) {
}

USmartObjectComponent::USmartObjectComponent() {
    this->bUseInRoutes = true;
    this->LookAtRule = ESmartObjectLookAtRule::None;
}

