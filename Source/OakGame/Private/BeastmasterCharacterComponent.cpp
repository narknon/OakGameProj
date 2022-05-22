#include "BeastmasterCharacterComponent.h"
#include "Net/UnrealNetwork.h"

class UOakPlayerCharacterAugmentData_Pet;
class AActor;
class UPawnAttachSlotComponent;
class UPlayerCharacterComponentSlotData;





void UBeastmasterCharacterComponent::ServerSetActivePetAugment_Implementation(UOakPlayerCharacterAugmentData_Pet* Augment) {
}
bool UBeastmasterCharacterComponent::ServerSetActivePetAugment_Validate(UOakPlayerCharacterAugmentData_Pet* Augment) {
    return true;
}

void UBeastmasterCharacterComponent::ServerOrderPetAttack_Implementation() {
}
bool UBeastmasterCharacterComponent::ServerOrderPetAttack_Validate() {
    return true;
}

void UBeastmasterCharacterComponent::RestartPetAttackCooldown() {
}

void UBeastmasterCharacterComponent::ResetPetAttackCooldown() {
}

void UBeastmasterCharacterComponent::OnRep_PetActor() {
}


void UBeastmasterCharacterComponent::OnPlayerLevelUp(const int32 OldExperienceLevel, const int32 NewExperieneLevel) {
}

void UBeastmasterCharacterComponent::OnPlayerDied() {
}

void UBeastmasterCharacterComponent::OnPetDied() {
}

void UBeastmasterCharacterComponent::OnPetDestroyed(AActor* DestroyedActor) {
}

void UBeastmasterCharacterComponent::OnPawnAttachSlotStarted(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UBeastmasterCharacterComponent::OnCharacterAugmentChanged(UPlayerCharacterComponentSlotData* SlotData) {
}


float UBeastmasterCharacterComponent::GetPetAttackCooldownPercent() const {
    return 0.0f;
}

bool UBeastmasterCharacterComponent::ForcePetSpawnAtLocation(FVector Location) {
    return false;
}

void UBeastmasterCharacterComponent::ClientNotifyPetAttackFailed_Implementation() {
}

void UBeastmasterCharacterComponent::BreakPetAugment(UOakPlayerCharacterAugmentData_Pet* Augment, EOakActionAbilityPetType& PetType, EOakActionAbilityPetEvolutionType& EvolutionType, FString& FrameName) {
}

void UBeastmasterCharacterComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UBeastmasterCharacterComponent, PetCooldownPoolRef);
    DOREPLIFETIME(UBeastmasterCharacterComponent, PetAttackCooldownPoolRef);
    DOREPLIFETIME(UBeastmasterCharacterComponent, PetActor);
    DOREPLIFETIME(UBeastmasterCharacterComponent, ActivePetAugment);
}

UBeastmasterCharacterComponent::UBeastmasterCharacterComponent() {
    this->PetSlotData = NULL;
    this->PetCooldownPool = NULL;
    this->PetAttackCooldownPool = NULL;
    this->PetActor = NULL;
    this->OwnerPlayer = NULL;
    this->ActivePetAugment = NULL;
    this->LocalPetAugment = NULL;
}

