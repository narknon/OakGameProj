#include "UIManagerMessage.h"

FUIManagerMessage::FUIManagerMessage() {
    this->bIsBlocking = false;
    this->bTimedMessage = false;
    this->TimeCreated = 0.00f;
    this->TimeRemaining = 0.00f;
    this->bDisplaySpinner = false;
    this->SpecialType = EMessageSpecialType::MST_None;
    this->OtherPlayerState = NULL;
}

