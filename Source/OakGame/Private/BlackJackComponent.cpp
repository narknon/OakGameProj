#include "BlackJackComponent.h"
#include "Net/UnrealNetwork.h"

bool UBlackJackComponent::ShouldOpenChest() {
    return false;
}

void UBlackJackComponent::Reset() {
}

void UBlackJackComponent::OpenChest() {
}

void UBlackJackComponent::OnRep_CurrentCards() {
}

int32 UBlackJackComponent::GetNbOfCard() {
    return 0;
}

int32 UBlackJackComponent::GetCurrentHandValue() {
    return 0;
}

int32 UBlackJackComponent::GetCardValueIndexAtIndex(int32 Index) {
    return 0;
}

int32 UBlackJackComponent::GetCardSuitIndexAtIndex(int32 Index) {
    return 0;
}

FString UBlackJackComponent::GetCardAtIndex(int32 Index) {
    return TEXT("");
}

bool UBlackJackComponent::CanUseOpenChest() {
    return false;
}

bool UBlackJackComponent::CanUseAddCard() {
    return false;
}

void UBlackJackComponent::AddCard() {
}

void UBlackJackComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBlackJackComponent, IndicesOfCurrentCards);
}

UBlackJackComponent::UBlackJackComponent() {
}

