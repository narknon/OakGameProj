#include "GFxGrenadeWidget.h"

class AActor;
class AOakCharacter;
class UInventorySlotData;

void UGFxGrenadeWidget::UpdatePoolReferenceHelper() const {
}

void UGFxGrenadeWidget::UpdateGrenadeValues(FGameResourcePoolReference& ResourcePoolReference) const {
}

void UGFxGrenadeWidget::UpdateGrenadeBar(int32 NewGrenadeCount) const {
}

void UGFxGrenadeWidget::SetGrenadePoolReference(FGameResourcePoolReference& NewGrenadeResourcePoolReference) const {
}

void UGFxGrenadeWidget::OnNewResourcePoolAdded(FGameResourcePoolReference ResourcePool) const {
}

void UGFxGrenadeWidget::OnInventoryEquipHasChanged(AActor* ChangedActor, UInventorySlotData* SlotData) const {
}

void UGFxGrenadeWidget::OnGrenadeThrowFailed(EGrenadeThrowFailureReason FailureReason) const {
}

void UGFxGrenadeWidget::OnGrenadeMinMaxValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float MinValue, float MaxValue) const {
}

void UGFxGrenadeWidget::OnGrenadeCurrentValueUpdate(FGameResourcePoolReference& ResourcePoolReference, float CurrentValue) const {
}

void UGFxGrenadeWidget::ClearDelegates(AOakCharacter* OldCharacter) const {
}

UGFxGrenadeWidget::UGFxGrenadeWidget() {
    this->GrenadePool = NULL;
    this->GrenadeWidgetClipStringID = TEXT("grenadeWidget");
    this->InnerTextClipStringID = TEXT("grenadeText");
    this->InnerTextClipContainerStringID = TEXT("grenadeTextContainer");
    this->InitializationClipID = TEXT("grenadeInitializationMC");
    this->GrenadeIcon_SwapIconToReady = TEXT("swapIconToReady");
    this->GrenadeIcon_SwapIconToEmpty = TEXT("swapIconToEmpty");
    this->GrenadeIcon_FailedToActivate = TEXT("failedToActivate");
    this->GrenadeIcon_EmptyToReady = TEXT("emptyToReady");
    this->GrenadeIcon_ReadyToEmpty = TEXT("readyToEmpty");
    this->GrenadeIcon_ValueChanged = TEXT("valueChanged");
    this->DefaultState_WithGrenades = TEXT("withGrenades");
    this->DefaultState_WithoutGrenades = TEXT("withoutGrenades");
    this->GrenadeIcon_FailedToActivateNoGrenadesLeft = TEXT("failedToActivateNoGrenadesLeft");
    this->GrenadeIcon_SetIconToDisbaled = TEXT("setIconToDisabled");
    this->TextValueChanged = TEXT("valueChanged");
    this->GrenadeIcon_InitializationAnim = TEXT("initialization");
    this->MainGrenadeClip = NULL;
    this->TextContainer = NULL;
    this->TextClip = NULL;
}

