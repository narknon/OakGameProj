#include "AutomationMenuHelper.h"

class AGbxPlayerController;
class UAutomationMenuHelper;

void UAutomationMenuHelper::PrevPage() {
}

FName UAutomationMenuHelper::PageName() {
    return NAME_None;
}

int32 UAutomationMenuHelper::NumPages() {
    return 0;
}

void UAutomationMenuHelper::NextPage() {
}

void UAutomationMenuHelper::NextFocus(const EAutomationUIDirection Direction) {
}

FName UAutomationMenuHelper::MenuName() {
    return NAME_None;
}

bool UAutomationMenuHelper::HasOpenMenu() {
    return false;
}

FName UAutomationMenuHelper::FocusName() {
    return NAME_None;
}

FAutomationMenuFocusInfo UAutomationMenuHelper::FocusInfo() {
    return FAutomationMenuFocusInfo{};
}

int32 UAutomationMenuHelper::CurrentDepth() {
    return 0;
}

UAutomationMenuHelper* UAutomationMenuHelper::CreateAutomationMenuHelper(AGbxPlayerController* PlayerController, const bool SimulateAllInputs) {
    return NULL;
}

void UAutomationMenuHelper::BackOut() {
}

void UAutomationMenuHelper::ActuateFocus(const EAutomationUIAction Action) {
}

UAutomationMenuHelper::UAutomationMenuHelper() {
}

