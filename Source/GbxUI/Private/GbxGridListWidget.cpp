#include "GbxGridListWidget.h"

UGbxGridListWidget::UGbxGridListWidget() {
    this->SelectedColumn = -1;
    this->SelectedRow = -1;
    this->SelectedIndexWhenFocusWasLost = -1;
    this->GridColumns = 0;
    this->GridRows = 0;
    this->GridFill = EGbxGridWidgetFill::FillRow;
    this->RowWrapMode = EGbxListWrapMode::Stick;
    this->ColumnWrapMode = EGbxListWrapMode::Stick;
    this->DefaultItemSelectionBehavior = EGbxFocusableWidgetMouseBehavior::SelectOnHover;
    this->ListItemFactory = NULL;
    this->DefaultListItemClass = NULL;
    this->FocusChangeAction = EGbxListFocusChangedAction::DoNotChangeSelection;
    this->bRegisterAsFocusableWidget = false;
    this->bFocusOnMenuCreation = false;
}

