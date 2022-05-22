#include "TargetableComponent.h"
#include "Net/UnrealNetwork.h"

class UGbxUIName;
class AController;
class APawn;
class AActor;

void UTargetableComponent::SetTargetUIName(const UGbxUIName* NewTargetUIName) {
}

void UTargetableComponent::SetTargetName(const FText& NewTargetName) {
}

void UTargetableComponent::SetIsTargetableByNonPlayers(bool NewIsTargetable) {
}

void UTargetableComponent::SetIsTargetableByHumanPlayers(bool NewIsTargetable) {
}

void UTargetableComponent::SetIsTargetableByAIPlayers(bool NewIsTargetable) {
}

void UTargetableComponent::SetIsTargetable(bool NewIsTargetable) {
}

void UTargetableComponent::OnRep_TargetUIName() {
}

bool UTargetableComponent::IsTargetableByPawn(const APawn* Pawn) const {
    return false;
}

bool UTargetableComponent::IsTargetableByNonPlayers() const {
    return false;
}

bool UTargetableComponent::IsTargetableByHumanPlayers() const {
    return false;
}

bool UTargetableComponent::IsTargetableByController(const AController* Controller) const {
    return false;
}

bool UTargetableComponent::IsTargetableByAIPlayers() const {
    return false;
}

bool UTargetableComponent::IsTargetableByActor(const AActor* Actor) const {
    return false;
}

bool UTargetableComponent::IsTargetable() const {
    return false;
}

FName UTargetableComponent::GetTargetSocketName() const {
    return NAME_None;
}

void UTargetableComponent::GetTargetProxyComponentNames(TArray<FName>& Array) const {
}

FString UTargetableComponent::GetTargetNameString() {
    return TEXT("");
}

TArray<FVector> UTargetableComponent::GetTargetLocations() const {
    return TArray<FVector>();
}

FVector UTargetableComponent::GetTargetLocation() const {
    return FVector{};
}

FVector UTargetableComponent::GetClosestTargetLocation(const FVector& Origin, const FVector& Direction) const {
    return FVector{};
}

void UTargetableComponent::GetAvailableSocketNames(TArray<FName>& Array) const {
}

void UTargetableComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UTargetableComponent, TargetUIName);
    DOREPLIFETIME(UTargetableComponent, TargetName);
    DOREPLIFETIME(UTargetableComponent, UntargetableLock);
}

UTargetableComponent::UTargetableComponent() {
    this->bSearchableByFindProjectileEQSTargetGenerator = false;
    this->bIsTargetable = true;
    this->bIsTargetableByHumanPlayers = true;
    this->bIsTargetableByAIPlayers = true;
    this->bIsTargetableByNonPlayers = true;
    this->bOnlyTargetableIfPlayersAreThreatened = false;
    this->TargetUIName = NULL;
    this->bUseTargetSocketBounds = false;
    this->CapsuleSections = 5.00f;
    this->bAllowCharacterHoming = true;
    this->AimAssistSnapTargetType = EAimAssistSnapTargetType::Default;
    this->bTargetTracking = true;
    this->bDisableBulletMagnetism = false;
}

