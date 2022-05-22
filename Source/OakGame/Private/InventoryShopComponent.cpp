#include "InventoryShopComponent.h"
#include "Net/UnrealNetwork.h"

class AActor;

void UInventoryShopComponent::OnRep_FeaturedInventory() {
}

void UInventoryShopComponent::HandleOwnerExperienceLevelChanged(const int32 OldExperienceLevel, const int32 NewExperienceLevel) {
}

void UInventoryShopComponent::HandleActorDestroyed(AActor* Actor) {
}

void UInventoryShopComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UInventoryShopComponent, FeaturedInventoryList);
    DOREPLIFETIME(UInventoryShopComponent, LastResetCounter);
}

UInventoryShopComponent::UInventoryShopComponent() {
    this->FeaturedItemPool = NULL;
    this->GameStageVarianceFormula = NULL;
    this->bGuaranteeEndGamePartForLoot = false;
    this->OverridePrimaryCurrency = NULL;
    this->InventoryRelevancyDistance = 2000.00f;
    this->LastResetCounter = 0;
    this->MayhemLevel = 0;
}

