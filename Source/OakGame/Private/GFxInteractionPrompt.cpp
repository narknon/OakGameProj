#include "GFxInteractionPrompt.h"

class AController;
class UPrimitiveComponent;
class UUsableComponent;
class UInventoryCategoryData;

void UGFxInteractionPrompt::UpdateUsabilityTextColor() const {
}

void UGFxInteractionPrompt::OnUsedSecondaryHold(AController* UserController, UPrimitiveComponent* UsedComponent) const {
}

void UGFxInteractionPrompt::OnUsedSecondary(AController* UserController, UPrimitiveComponent* UsedComponent) const {
}

void UGFxInteractionPrompt::OnUsedPrimaryHold(AController* UserController, UPrimitiveComponent* UsedComponent) const {
}

void UGFxInteractionPrompt::OnUsedPrimary(AController* UserController, UPrimitiveComponent* UsedComponent) const {
}

void UGFxInteractionPrompt::OnUsabilityChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo) const {
}

void UGFxInteractionPrompt::OnRevivingStop(bool IsHealed) const {
}

void UGFxInteractionPrompt::OnRevivingStart() const {
}

void UGFxInteractionPrompt::OnInputDeviceChanged() const {
}

void UGFxInteractionPrompt::OnHoldUseStopped() const {
}

void UGFxInteractionPrompt::OnCurrentUsableChanged(UUsableComponent* NewUsableComponent, const FUsabilityInfo& InUsabilityInfo, FVector NewUsableComponentImpactPoint, float NewUsableComponentDistanceAway) const {
}

void UGFxInteractionPrompt::OnCurrencyQuantityChanged(const FInventoryListEntryHandle& UpdatedItemHandle, const UInventoryCategoryData* ItemCategory, int32 Quantity, int32 MaxQuantity) const {
}

UGFxInteractionPrompt::UGFxInteractionPrompt() {
    this->HintWidgetPrimary = NULL;
    this->InteractionLabelPrimary = NULL;
    this->ModeIconsPrimary = NULL;
    this->HintWidgetSecondary = NULL;
    this->InteractionLabelSecondary = NULL;
    this->ModeIconsSecondary = NULL;
    this->UseComponent = NULL;
    this->CachedUsableComponent = NULL;
    this->CachedInventoryList = NULL;
    this->LinesLayout = EPromptLinesLayouts::INVALID;
}

