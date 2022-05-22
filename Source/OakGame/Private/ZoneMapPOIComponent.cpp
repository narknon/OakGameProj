#include "ZoneMapPOIComponent.h"

class UMaterialInstanceDynamic;
class UPawnAttachSlotComponent;
class AActor;

void UZoneMapPOIComponent::ViewModeChanged_Implementation() {
}

void UZoneMapPOIComponent::SetupSpriteMaterial(UMaterialInstanceDynamic* InSpriteMaterial) {
}

void UZoneMapPOIComponent::OnCharacterExitedVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UZoneMapPOIComponent::OnCharacterEnteringVehicle(const UPawnAttachSlotComponent* PawnAttachSlotComponent) {
}

void UZoneMapPOIComponent::OnCharacterDied() {
}

void UZoneMapPOIComponent::OnAssociatedActorDestroyed(AActor* DestroyedActor) {
}

UZoneMapPOIComponent::UZoneMapPOIComponent() {
    this->SpriteTexture = NULL;
    this->IconZOffset = 0.00f;
    this->bCullOutsideMiniMap = true;
    this->SpriteMaterial = NULL;
    this->bIsKnown = true;
    this->ZoneMap = NULL;
    this->MapIconComponent = NULL;
}

