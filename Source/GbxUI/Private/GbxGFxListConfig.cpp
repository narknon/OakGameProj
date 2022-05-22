#include "GbxGFxListConfig.h"

FGbxGFxListConfig::FGbxGFxListConfig() {
    this->ConfigType = EGbxGFxListConfigType::All;
    this->ListOrientation = EGbxGFxListOrientation::Vertical;
    this->ListAlignment = EGbxGFxListAlignment::Left;
    this->FillSize = 0;
    this->VertCellSpacing = 0.00f;
    this->HorzCellSpacing = 0.00f;
    this->bAutoHideScrollBar = false;
    this->WrapMode = EGbxGFxScrollListWrapMode::Stick;
    this->DefaultItemSelectionBehavior = EGbxFocusableWidgetMouseBehavior::None;
    this->FocusChangeAction = EGbxGFxScrollListFocusChangedAction::DoNotChangeSelection;
    this->bMustHaveOneFocusableCellToReceiveFocus = false;
    this->FocusOrderPriority = EGbxGFxScrollListFocusOrderPriority::BringToFront;
    this->AddedItemPriority = EGbxGFxScrollListAddedItemPriority::NewestOnTop;
    this->bUseFixedCellBounds = false;
    this->bMoveSelectionScrollIntoView = false;
    this->bMoveSelectionAnimateScroll = false;
    this->bKeepScrollbarOnTop = false;
    this->bAlwaysConsumeDirectionInput = false;
    this->bAllowScrolling = false;
    this->bReverseScrollDirection = false;
    this->bCanBeNavigatedIfMouseDisabled = false;
    this->bFocusListIfCellGetsFocused = false;
}

