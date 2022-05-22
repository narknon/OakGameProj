#include "GbxFocusableWidgetItemStyle.h"

FGbxFocusableWidgetItemStyle::FGbxFocusableWidgetItemStyle() {
    this->State = EGbxFocusableWidgetState::Unknown;
    this->bUseTextColor = false;
    this->bUseTextSize = false;
    this->bUseIndicatorBrush = false;
    this->TextSize = 0;
}

