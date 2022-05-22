#include "FastTravelStationDebugMenu.h"

class UFastTravelStationDebugButton;

void UFastTravelStationDebugMenu::OnTravelStationSelectedChanged(UFastTravelStationDebugButton* TriggeredButton, bool bIsChecked) {
}

void UFastTravelStationDebugMenu::OnTravelButtonClicked() {
}

void UFastTravelStationDebugMenu::OnShowLevelStationsStateChanged(bool bIsChecked) {
}

void UFastTravelStationDebugMenu::OnActiveStationsStateChanged(bool bIsChecked) {
}

UFastTravelStationDebugMenu::UFastTravelStationDebugMenu() {
    this->TravelButton = NULL;
    this->ActiveStationsButton = NULL;
    this->ShowLevelStationsButton = NULL;
    this->TravelStationList = NULL;
    this->ErrorText = NULL;
    this->OptionButtonClass = NULL;
    this->ShowAllFastTravelStations = false;
}

