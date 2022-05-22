#include "OakInventoryItemPickup.h"
#include "Net/UnrealNetwork.h"
#include "Particles/ParticleSystemComponent.h"

class AActor;

void AOakInventoryItemPickup::TryMassPickupBy(AActor* GiveToActor) {
}

void AOakInventoryItemPickup::SetupZoneMapIcon() {
}

void AOakInventoryItemPickup::SetNoLootBeam(bool bNoBeam) {
}

void AOakInventoryItemPickup::OnRep_NoLootBeam() {
}

void AOakInventoryItemPickup::OnRep_bIsInstanced() {
}

void AOakInventoryItemPickup::HandleActorDestroyed(AActor* Actor) {
}

void AOakInventoryItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AOakInventoryItemPickup, DesiredFlyToType);
    DOREPLIFETIME(AOakInventoryItemPickup, bIsInstanced);
    DOREPLIFETIME(AOakInventoryItemPickup, bPlayedCallout);
    DOREPLIFETIME(AOakInventoryItemPickup, bPickupEquipped);
    DOREPLIFETIME(AOakInventoryItemPickup, bNoLootBeam);
}

AOakInventoryItemPickup::AOakInventoryItemPickup() {
    this->ItemCardDelay = 2.00f;
    this->bFlyToOnPickup = true;
    this->FlyToAlignment = EPickupFlyToAlignmentType::Spin;
    this->DroppedPickupFlyToSettings = NULL;
    this->ContainerPickupFlyToSettings = NULL;
    this->AutoLootContainerPickupFlyToSettings = NULL;
    this->DefaultPickupItemPool = NULL;
    this->VaultRewardType = EVaultRewardType::None;
    this->bTouchPickupOnFoot = true;
    this->bTouchPickupInVehicle = true;
    this->CachedUsableComponent = NULL;
    this->LootBeamComponent = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("LootBeamComponent"));
    this->AutoPickupDelay = 2.00f;
    this->bMassPickupable = false;
    this->bCauseMassPickupOnHoldUse = false;
    this->DesiredFlyToType = EPickupFlyToSettingsType::Dropped;
    this->bIsInstanced = false;
    this->bPlayedCallout = false;
    this->bPickupEquipped = false;
    this->bNoLootBeam = false;
    this->AssociatedInventoryRarityData = NULL;
    this->MissionIconComponent = NULL;
    this->PlayerAlertType = EPlayerAlertType::Loot;
}

