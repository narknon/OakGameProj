#include "GbxScrollBoxList.h"

UGbxScrollBoxList::UGbxScrollBoxList() {
    this->SelectedIndex = -1;
    this->SelectedIndexWhenFocusWasLost = -1;
    this->WrapMode = EGbxScrollBoxListWrapMode::Stick;
    this->DefaultItemSelectionBehavior = EGbxFocusableWidgetMouseBehavior::SelectOnHover;
    this->ListItemFactory = NULL;
    this->DefaultListItemClass = NULL;
    this->FocusChangeAction = EGbxScrollBoxListFocusChangedAction::DoNotChangeSelection;
    this->bRegisterAsFocusableWidget = false;
    this->bFocusOnMenuCreation = false;
}

