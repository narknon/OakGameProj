#include "VendingMachineProxy.h"
#include "Components/SkeletalMeshComponent.h"

class AActor;

void AVendingMachineProxy::StopAnimation() {
}

void AVendingMachineProxy::SetAnimationPaused(bool bNewPaused) {
}

void AVendingMachineProxy::ScrollUp(float ScrollDuration, bool bIsInitialPress, bool bCanThrottle) {
}

void AVendingMachineProxy::ScrollDown(float ScrollDuration, bool bIsInitialPress, bool bCanThrottle) {
}

void AVendingMachineProxy::OnStopInteractionSequenceFinished_Implementation() {
}

void AVendingMachineProxy::OnStartInteractionSequenceFinished_Implementation() {
}








FTransform AVendingMachineProxy::GetCurrentSocketTransform(AActor* InventoryActor, EVendingMachineTilesMode Mode, int32 SocketLocation) const {
    return FTransform{};
}

AVendingMachineProxy::AVendingMachineProxy() {
    this->VendingMachineMenu = NULL;
    this->ItemAttachmentMode = EPickupLootAttachmentMode::CenterAndScaleUpOrDown;
    this->NumTrayTiles = 10;
    this->PrimaryTrayIndex = 2;
    this->VisibleTrayTilesBufferSize = 3;
    this->EndOfListPaddingSize = 2;
    this->MinNumTilesToAllowWrapping = 4;
    this->MinNumTiles = 3;
    this->bHideDummyTiles = true;
    this->ScrollSkipMaxDuration = 0.30f;
    this->bScrollSkipOverSoldOutTiles = false;
    this->bPickupFlyToEnabled = false;
    this->DelayBeforeShelfIsStablySelected = 0.40f;
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMeshComponent0"));
    this->CurrentInteractionMode = EVendingMachineInteractionMode::Purchase;
    this->CurrentTilesMode = EVendingMachineTilesMode::Purchase;
    this->Animations[0] = NULL;
    this->Animations[1] = NULL;
    this->Animations[2] = NULL;
    this->Animations[3] = NULL;
    this->Animations[4] = NULL;
    this->Animations[5] = NULL;
    this->Animations[6] = NULL;
    this->Animations[7] = NULL;
    this->Animations[8] = NULL;
    this->Animations[9] = NULL;
    this->Animations[10] = NULL;
    this->Animations[11] = NULL;
    this->Animations[12] = NULL;
    this->Animations[13] = NULL;
    this->Animations[14] = NULL;
    this->Animations[15] = NULL;
    this->AnimIndexOffsets[0] = 0;
    this->AnimIndexOffsets[1] = 0;
    this->AnimIndexOffsets[2] = 0;
    this->AnimIndexOffsets[3] = 0;
    this->AnimIndexOffsets[4] = 0;
    this->AnimIndexOffsets[5] = 0;
    this->AnimIndexOffsets[6] = 0;
    this->AnimIndexOffsets[7] = 0;
    this->AnimIndexOffsets[8] = 0;
    this->AnimIndexOffsets[9] = 0;
    this->AnimIndexOffsets[10] = 0;
    this->AnimIndexOffsets[11] = 0;
    this->AnimIndexOffsets[12] = 0;
    this->AnimIndexOffsets[13] = 0;
    this->AnimIndexOffsets[14] = 0;
    this->AnimIndexOffsets[15] = 0;
    this->DelayBeforeHidingPurchasedItem = 0.30f;
    this->DelayBeforeDigistructingBackInPurchasedItem = 0.10f;
    this->DelayBeforePurchaseItemClunkSound = 0.10f;
    this->DefaultShelfMesh = NULL;
    this->FeaturedInventoryShelfMesh = NULL;
    this->DefaultShelfMaterial = NULL;
    this->DefaultFeaturedInventoryShelfMaterial = NULL;
    this->SelectedShelfMaterialParameterName = TEXT("IsSelected");
    this->InStockShelfMaterialMaterialName = TEXT("InStock");
    this->ItemScoreEmitterTemplate = NULL;
    this->ItemScoreParticleSortPriority = 0;
    this->ItemScoreParameterName = TEXT("ItemScore");
    this->ItemScoreParticleScale = 1.00f;
    this->ItemScorePositionParameterName = TEXT("Position");
    this->SoldOutParticleTemplate = NULL;
    this->SoldOutParticleSortPriority = 0;
    this->DefaultSelectedItemEmitterTemplate = NULL;
    this->CompareItemEmitterTemplate = NULL;
    this->SelectedItemParticleSortPriority = 0;
    this->SelectedItemParticleRarityParameterName = TEXT("RarityValue");
    this->ErrorShelfEmitterTemplate = NULL;
    this->ErrorParticleSortPriority = 0;
    this->ItemDigistructInCE = NULL;
    this->ItemDigistructOutCE = NULL;
    this->PrimaryPhysMat = NULL;
    this->ErrorSoundEvent = NULL;
    this->DigistructInItemEvent = NULL;
    this->EnteredItemOfTheDayRangeEvent = NULL;
    this->ExitedItemOfTheDayRangeEvent = NULL;
    this->MaxSellJunkDuration = 1.00f;
    this->MaxJunkCount = 7;
    this->PlayerShopManager = NULL;
    this->FrontPlateComponent = NULL;
    this->OwningVendingMachine = NULL;
    this->OwningShopComponent = NULL;
    this->SelectedItemParticleComponent = NULL;
    this->HoveredItemParticleComponent = NULL;
    this->ErrorSelectionParticleComponent = NULL;
    this->CompareItemParticleComponent = NULL;
    this->AudioComponent = NULL;
    this->SelectedTileIndex = 0;
    this->SelectedCompareItemTileIndex = -1;
    this->CurrentAnimType = EVendingMachineAnimType::Idle;
}

