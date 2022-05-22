#include "GFxVendingMachinePrompt.h"

class UUsableComponent;
class AVendingMachine;

void UGFxVendingMachinePrompt::UpdateWidgetLocation(FVector DistVector) const {
}

FVector UGFxVendingMachinePrompt::UpdateDistanceToVendingMachine() const {
    return FVector{};
}

void UGFxVendingMachinePrompt::RefreshIcon() const {
}

void UGFxVendingMachinePrompt::OnThumbnailLoaded() const {
}

void UGFxVendingMachinePrompt::OnLookedAwayFromByPlayer(UUsableComponent* NewUsableComponent) const {
}

void UGFxVendingMachinePrompt::OnLookedAtByPlayer(UUsableComponent* NewUsableComponent) const {
}

void UGFxVendingMachinePrompt::InitSocketLocation(AVendingMachine* VendingMachine) const {
}

void UGFxVendingMachinePrompt::BuildVendingMachinePrompt(AVendingMachine* VendingMachine) const {
}

UGFxVendingMachinePrompt::UGFxVendingMachinePrompt() {
    this->CachedOakPlayerController = NULL;
    this->FeaturedItemActor = NULL;
    this->IconManager = NULL;
    this->VendingMachineMenuCharacter = NULL;
    this->PlayerShopManager = NULL;
    this->CurrentShopComponent = NULL;
    this->VisibilityDistance = 300.00f;
    this->DistanceScaleCurve = NULL;
    this->FlavorTextString = FText::FromString(TEXT("Time is Running Out!"));
    this->ItemOfTheDayTextString = FText::FromString(TEXT("Item Of The Day"));
    this->SocketName = TEXT("ItemOfTheDaySocket");
    this->RarityContentID = TEXT("rarityContent");
    this->TimerTextID = TEXT("iodTimer");
    this->IODTextID = TEXT("iodText");
    this->ItemScoreID = TEXT("itemScore");
    this->ManufacturerContentID = TEXT("manufacturer");
    this->RarityTextID = TEXT("rarityText");
    this->RaysID = TEXT("rays");
    this->FlavorTextID = TEXT("flavorText");
    this->ElementalIconID = TEXT("elemental");
    this->WeaponIconID = TEXT("weaponIconClip");
    this->WeaponIconShadowID = TEXT("weaponIconShadow");
    this->HeadTypeID = TEXT("marcus");
    this->ManufacturerIconID = TEXT("manufacturerIcon");
    this->ManufactrerRarityClipID = TEXT("manufacturerImageTint");
    this->ExtRenderClipID = TEXT("WeaponRender.WeaponRenderWrapper.ExtTexRender");
    this->ExtShadowRenderClipID = TEXT("WeaponRenderShadow.WeaponRenderWrapper.ExtTexRender");
    this->ViewportBaseScaleFactor = 1920.00f;
    this->SoldOutText = FText::FromString(TEXT("Sold Out"));
    this->ItemOfTheDayClip = NULL;
    this->HeadType = NULL;
    this->ElementalIcon = NULL;
    this->RarityContent = NULL;
    this->RarityTextClip = NULL;
    this->Rays = NULL;
    this->WeaponIcon = NULL;
    this->TimerText = NULL;
    this->IODText = NULL;
    this->ItemScore = NULL;
    this->ManufacturerContent = NULL;
    this->ManufacturerIcon = NULL;
    this->RarityText = NULL;
    this->FlavorText = NULL;
    this->WeaponIconShadow = NULL;
    this->ManufacturerRarityClip = NULL;
    this->ExtRenderClip = NULL;
    this->ExtShadowRenderClip = NULL;
    this->SoldOutTextClip = NULL;
}

