#include "DroppedInventoryItemPickup.h"
#include "Net/UnrealNetwork.h"

class UPrimitiveComponent;
class AActor;

void ADroppedInventoryItemPickup::OnRep_ShrinkLifeSpan() {
}

void ADroppedInventoryItemPickup::OnRep_InitialMassScale() {
}

void ADroppedInventoryItemPickup::OnRep_DroppedQuantity() {
}

void ADroppedInventoryItemPickup::OnPickupHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void ADroppedInventoryItemPickup::OnPhysicsWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ADroppedInventoryItemPickup::OnPhysicsSleep(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void ADroppedInventoryItemPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ADroppedInventoryItemPickup, InitialMassScale);
    DOREPLIFETIME(ADroppedInventoryItemPickup, DroppedQuantity);
    DOREPLIFETIME(ADroppedInventoryItemPickup, ShrinkLifeSpan);
    DOREPLIFETIME(ADroppedInventoryItemPickup, bDroppedFromPlayerInventory);
}

ADroppedInventoryItemPickup::ADroppedInventoryItemPickup() {
    this->LinearDamping = 1.50f;
    this->NextImpactDistanceThreshold = 400.00f;
    this->NextImpactTimeThreshold = 1.00f;
    this->ImpactVelocityThreshold = 40000.00f;
    this->DefaultVelocity = 0.00f;
    this->InitialMassScale = 0.00f;
    this->DroppedQuantity = 1;
    this->ShrinkLifeSpan = 0.00f;
    this->bDroppedFromPlayerInventory = false;
}

