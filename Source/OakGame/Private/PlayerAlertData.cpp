#include "PlayerAlertData.h"

UPlayerAlertData::UPlayerAlertData() {
    this->PlayerAlertType = EPlayerAlertType::Neutral;
    this->PlayerAlertEvent = NULL;
    this->PlayerAlertLifetime = 15.00f;
    this->ApplyOutlineEffect = true;
    this->AttachAlertIcon = true;
    this->PlayerAlertIconData = NULL;
    this->CustomStencilValue = 0;
    this->bPlaySound = true;
}

