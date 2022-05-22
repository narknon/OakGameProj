#include "GbxUmgMenu.h"

class UGbxHintBarWidgetContainer;
class IGbxHintBarWidgetContainer;
class UObject;
class UWidget;
class UGbxListItemFactory;
class UGbxHintWidget;
class IGbxHintWidget;
class UGbxMenuData;

void UGbxUmgMenu::SetWidgetAdjacency(UObject* Widget, const FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo) {
}

void UGbxUmgMenu::SetSlateFocusedWidget(UWidget* Widget) {
}

void UGbxUmgMenu::SetHintBarContainer(const TScriptInterface<IGbxHintBarWidgetContainer>& InContainer) {
}

void UGbxUmgMenu::SetFocusedWidget(UObject* Widget, bool bFromMouse) {
}

void UGbxUmgMenu::SetFocusableWidgetAdjancency(UObject* Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) {
}

void UGbxUmgMenu::RegisterStagePlacedHint(const TScriptInterface<IGbxHintWidget>& InHintWidget, const FName InInputAction) {
}

void UGbxUmgMenu::RegisterFocusableWidgetWithAdjacency(UObject* Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) {
}

void UGbxUmgMenu::RegisterFocusableWidget(UObject* Widget, FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo) {
}

void UGbxUmgMenu::PopulateHintBar() {
}

void UGbxUmgMenu::NavigateBack() {
}

UObject* UGbxUmgMenu::MenuStack_SwitchTo(UGbxMenuData* MenuDataIn) {
    return NULL;
}

UObject* UGbxUmgMenu::MenuStack_Push(UGbxMenuData* MenuDataIn) {
    return NULL;
}

UObject* UGbxUmgMenu::MenuStack_PopToSwitchTo(const UObject* Menu, UGbxMenuData* MenuDataIn) {
    return NULL;
}

void UGbxUmgMenu::MenuStack_PopTo(const UObject* Menu) {
}

void UGbxUmgMenu::MenuStack_Pop() {
}

void UGbxUmgMenu::MenuStack_Clear() {
}

bool UGbxUmgMenu::IsWidgetFocused(const UObject* WidgetInQuestion) const {
    return false;
}

bool UGbxUmgMenu::IsActiveMenuOnStack() const {
    return false;
}








UGbxListItemFactory* UGbxUmgMenu::GetListItemFactory() const {
    return NULL;
}

UObject* UGbxUmgMenu::GetFocusedWidget() const {
    return NULL;
}

EGbxMenuInputDevice UGbxUmgMenu::GetCurrentInputDevice() const {
    return EGbxMenuInputDevice::Unknown;
}

UGbxUmgMenu::UGbxUmgMenu() {
    this->MenuData = NULL;
    this->PCOwner = NULL;
    this->MenuStackOwner = NULL;
    this->FocusManager = NULL;
    this->HintBar = NULL;
    this->DefaultMouseFocusBehavior = EGbxFocusableWidgetMouseBehavior::SelectOnHover;
}

