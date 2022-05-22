#include "InventoryRarityData.h"

class UParticleSystem;
class UWwiseEvent;

int32 UInventoryRarityData::GetRaritySortValue() const {
    return 0;
}

int32 UInventoryRarityData::GetRarityOutlineDepthStencilValue() const {
    return 0;
}

UParticleSystem* UInventoryRarityData::GetRarityLootBeamOverride(bool bInventoryHasAFoilPart) const {
    return NULL;
}

float UInventoryRarityData::GetRarityLootBeamHeight() const {
    return 0.0f;
}

UWwiseEvent* UInventoryRarityData::GetRarityLootAudioStinger() const {
    return NULL;
}

EDropLifeSpanType UInventoryRarityData::GetRarityLifeSpanType() const {
    return EDropLifeSpanType::DROP_VeryShortLived;
}

float UInventoryRarityData::GetRarityLifeSpan() const {
    return 0.0f;
}

FText UInventoryRarityData::GetRarityDisplayName() const {
    return FText::GetEmpty();
}

FLinearColor UInventoryRarityData::GetRarityColorOutline() const {
    return FLinearColor{};
}

FLinearColor UInventoryRarityData::GetRarityColorFX() const {
    return FLinearColor{};
}

FAttributeInitializationData UInventoryRarityData::GetItemScoreRarityModifier() const {
    return FAttributeInitializationData{};
}

bool UInventoryRarityData::GetDisplayRarityOutline() const {
    return false;
}

UInventoryRarityData::UInventoryRarityData() {
    this->RarityOutlineDepthStencilValue = 10;
    this->DisplayRarityOutline = true;
    this->RarityLifeSpanType = EDropLifeSpanType::DROP_VeryShortLived;
    this->RaritySortValue = 0;
    this->RarityLootBeamOverride = NULL;
    this->RarityLootBeamForInventoryWithFoilParts = NULL;
    this->RarityLootBeamHeight = 130.00f;
    this->RarityLootAudioStinger = NULL;
}

