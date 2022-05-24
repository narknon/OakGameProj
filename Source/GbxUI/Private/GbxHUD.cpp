#include "GbxHUD.h"

class AGbxPlayerController;
class UGbxHUDStateData;
class UGbxHUDData;
class AGbxCharacter;
class APawn;

void AGbxHUD::SwitchToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State) {
}

void AGbxHUD::SetHUDContainer(AGbxPlayerController* PlayerController, const UGbxHUDData* ContainerDefinition) {
}

void AGbxHUD::PushHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State, bool bAllowDuplicatePush) {
}

void AGbxHUD::PopToSwitchToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* PopToState, UGbxHUDStateData* SwitchToState) {
}

void AGbxHUD::PopToHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State) {
}

void AGbxHUD::PopSpecifiedHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State) {
}

void AGbxHUD::PopHUDState(AGbxPlayerController* PlayerController) {
}

void AGbxHUD::OnPrimaryCharacterChanged(AGbxCharacter* Character) {
}

void AGbxHUD::OnPawnChanged(APawn* Pawn, APawn* OldPawn) {
}

void AGbxHUD::GotoPreviousHUDState(AGbxPlayerController* PlayerController) {
}

void AGbxHUD::GotoHUDState(AGbxPlayerController* PlayerController, UGbxHUDStateData* State) {
}

UGbxHUDStateData* AGbxHUD::GetCurrentHUDState(AGbxPlayerController* PlayerController) {
    return NULL;
}

void AGbxHUD::ClearToDefaultHUDState(AGbxPlayerController* PlayerController) {
}

void AGbxHUD::ClearHUDStates(AGbxPlayerController* PlayerController) {
}

AGbxHUD::AGbxHUD() {
    this->bDisplayScaleformHUD = true;
    this->ChangedFromPawn = NULL;
    this->GFxHUDContainer = NULL;
    this->OverrideContainerDefinition = NULL;
    this->CurrentInputDevice = EGbxMenuInputDevice::Unknown;
}

