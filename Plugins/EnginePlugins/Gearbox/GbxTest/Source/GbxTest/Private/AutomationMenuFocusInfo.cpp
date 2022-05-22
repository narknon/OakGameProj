#include "AutomationMenuFocusInfo.h"

FAutomationMenuFocusInfo::FAutomationMenuFocusInfo() {
    this->ObjectNum = 0;
    this->Index = 0;
    this->ButtonType = EGbxGFxButtonType::Standard;
    this->IsButton = false;
    this->IsListCell = false;
    this->IsListItem = false;
    this->IsGridList = false;
}

