#include "InventoryItemPickup.h"
#include "Net/UnrealNetwork.h"
#include "Components/SphereComponent.h"

class AController;
class APlayerController;
class UMeshComponent;
class AActor;
class UParticleSystem;
class UWwiseEvent;
class UInventoryBalanceStateComponent;

void AInventoryItemPickup::WaitForBalanceState() {
}

void AInventoryItemPickup::SetCanOnlyBePickedUpByOwner(bool bNewCanOnlyBePickedUpByOwnerController, AController* OwnerController) {
}

void AInventoryItemPickup::ResetBumpOnPickupFail() {
}

void AInventoryItemPickup::OnUsedBy(const FUseEvent& UseEvent) {
}


void AInventoryItemPickup::OnRep_RepLootSpawnAction() {
}

void AInventoryItemPickup::OnRep_PickupActorClientSpawnData() {
}

void AInventoryItemPickup::OnRep_PickupActor() {
}

void AInventoryItemPickup::OnRep_PickedUpBy() {
}

void AInventoryItemPickup::OnRep_IsActive() {
}

void AInventoryItemPickup::OnRep_BumpAngularDir() {
}


void AInventoryItemPickup::OnLookedAtByPlayer(APlayerController* InstigatingPlayer, bool bCanInteractWith, FVector NewUsableComponentImpactPoint, float NewUsableDistanceAway) {
}

bool AInventoryItemPickup::IsPickupInitialized() {
    return false;
}

void AInventoryItemPickup::GiveInventoryToUser(AActor* Other, bool bAutoEquip) {
}

UMeshComponent* AInventoryItemPickup::GetMeshComponent() const {
    return NULL;
}

UParticleSystem* AInventoryItemPickup::GetInventoryRarityLootBeamOverride() const {
    return NULL;
}

UWwiseEvent* AInventoryItemPickup::GetInventoryRarityLootAudioStinger() const {
    return NULL;
}

EDropLifeSpanType AInventoryItemPickup::GetInventoryRarityLifeSpanType() const {
    return EDropLifeSpanType::DROP_VeryShortLived;
}

FLinearColor AInventoryItemPickup::GetInventoryRarityColorOutline() const {
    return FLinearColor{};
}

FLinearColor AInventoryItemPickup::GetInventoryRarityColorFX() const {
    return FLinearColor{};
}

bool AInventoryItemPickup::GetInventoryDisplayRarityOutline() const {
    return false;
}

UInventoryBalanceStateComponent* AInventoryItemPickup::GetInventoryBalanceStateComponent() const {
    return NULL;
}

void AInventoryItemPickup::DeactivatePickup() {
}

bool AInventoryItemPickup::CanBePickedUp(AActor* Other, bool UsedByOther, bool bUseHeld, bool bForMassPickup) {
    return false;
}

void AInventoryItemPickup::ActivatePickup() {
}

void AInventoryItemPickup::ActivateAfterSpawnDelay() {
}

void AInventoryItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AInventoryItemPickup, PickedUpBy);
    DOREPLIFETIME(AInventoryItemPickup, bCanOnlyBePickedUpByOwnerController);
    DOREPLIFETIME(AInventoryItemPickup, PickupCategory);
    DOREPLIFETIME(AInventoryItemPickup, ReplicatedPickupActor);
    DOREPLIFETIME(AInventoryItemPickup, PickupActorClientSpawnData);
    DOREPLIFETIME(AInventoryItemPickup, bPickupSpawnPaused);
    DOREPLIFETIME(AInventoryItemPickup, bIsActive);
    DOREPLIFETIME(AInventoryItemPickup, BumpAngularDir);
    DOREPLIFETIME(AInventoryItemPickup, RepLootSpawnAction);
}

AInventoryItemPickup::AInventoryItemPickup() {
    this->PickupAudioEvent = NULL;
    this->CompletePickupAudioEvent = NULL;
    this->DestroyOnPickup = true;
    this->UseFailBumpUpVelocity = 0.00f;
    this->UseFailBumpBaseRotation = 0.00f;
    this->PickedUpBy = NULL;
    this->PickupMesh = NULL;
    this->PickupSkelMesh = NULL;
    this->Quantity = 1;
    this->bCanOnlyBePickedUpByOwnerController = false;
    this->bHighDetail = false;
    this->bSharedWithAllPlayers = false;
    this->bSharedPlayersMustBeOnFriendlyTeam = true;
    this->bReplicatePickupActor = false;
    this->StaticPickup = false;
    this->bUseInventoryDataPickupActionType = true;
    this->DefaultPickupActorClass = NULL;
    this->MaxDrawDistance = 0.00f;
    this->DefaultPickupActionType = EPickupActionType::OnUseOrTouch;
    this->StaticPickupActionType = EPickupActionType::OnUseOnly;
    this->CanBeTouchedCondition = NULL;
    this->PickupCategory = NULL;
    this->NotAddedToInventory = false;
    this->PickupSphereRadius = 0.00f;
    this->PickupSphereRadiusHideScale = 0.00f;
    this->PickupSphereComponent = CreateDefaultSubobject<USphereComponent>(TEXT("PickupSphereComponent"));
    this->AssociatedInventoryData = NULL;
    this->PlacedPickup = false;
    this->CachedInventoryBalanceComponent = NULL;
    this->PickupActor = NULL;
    this->ReplicatedPickupActor = NULL;
    this->bPickupSpawnPaused = false;
    this->bIsActive = true;
    this->LootSpawnAction = NULL;
    this->RepLootSpawnAction = NULL;
}

