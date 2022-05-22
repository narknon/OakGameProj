#include "MenuMapMenuFlow.h"

class UObject;
class UGbxMenuData;
class AOakPlayerController;
class UGFxOakLegalScreenMenu;

void AMenuMapMenuFlow::Start(TEnumAsByte<EInitialPlayerStatus::Type>& OutInitialPlayerStatus) {
}

void AMenuMapMenuFlow::ShowLegalScreen() {
}

void AMenuMapMenuFlow::OnWorldTransitionCompleted() {
}

void AMenuMapMenuFlow::OnPlayerControllerLogIn(AOakPlayerController* InOakPlayerController) {
}

void AMenuMapMenuFlow::OnMenuTransitionOutCompleted(EMenuTransition InMenuTransition, UGbxMenuData* InNextMenuData) {
}

void AMenuMapMenuFlow::OnMenuStackPush(UObject* InMenuPushed) {
}

void AMenuMapMenuFlow::OnLegalScreenCompleted(const UGFxOakLegalScreenMenu* LegalScreenMenu) {
}

AMenuMapMenuFlow::AMenuMapMenuFlow() {
    this->MainMenuMenuData = NULL;
    this->TitleScreenMenuData = NULL;
    this->LegalScreenMenuData = NULL;
    this->SecondsBetweenClaptrapSkits = 5;
    this->CameraData = NULL;
    this->OakPlayerController = NULL;
    this->NextMenuData = NULL;
    this->CurrentViewpointType = EMainMenuViewpointType::TitleScreen;
}

