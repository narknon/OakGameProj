#include "GbxMenuData.h"

UGbxMenuData::UGbxMenuData() {
    this->bHideMenusBeneath = false;
    this->bShowsMouse = true;
    this->InputMode = EGbxMenuInputMode::OwnerPlayer;
    this->ParentType = EGbxMenuParentType::PlayerScreen;
    this->bAutoAttemptPop = true;
    this->bUseMenuStashing = false;
    this->bActivateIfPoppedTo = true;
    this->IdleDialogEvent = NULL;
    this->IdleDialogTargetParamater = NULL;
}

