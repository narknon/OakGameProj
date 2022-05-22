#include "GbxMenuStack.h"

class UGbxMenuData;
class UObject;

void UGbxMenuStack::Tick(float DeltaTime) {
}

UObject* UGbxMenuStack::SwitchTo(UGbxMenuData* MenuData) {
    return NULL;
}

void UGbxMenuStack::SetBlockingMode(bool bShouldBlock) {
}

void UGbxMenuStack::SetBlockAllRawInput(bool bShouldBlock) {
}

UObject* UGbxMenuStack::Push(UGbxMenuData* MenuData) {
    return NULL;
}

UObject* UGbxMenuStack::PopToSwitchTo(const UObject* Menu, UGbxMenuData* MenuData) {
    return NULL;
}

void UGbxMenuStack::PopTo(const UObject* Menu) {
}

void UGbxMenuStack::Pop() {
}

int32 UGbxMenuStack::Num() const {
    return 0;
}

void UGbxMenuStack::HandleRawInput(FKey Key, TEnumAsByte<EInputEvent> EVENTTYPE, int32 ControllerId) {
}

UObject* UGbxMenuStack::GetTopMenu() {
    return NULL;
}

UObject* UGbxMenuStack::GetMenuAtIndex(int32 Index) {
    return NULL;
}

int32 UGbxMenuStack::GetIndexOfMenu(const UObject* Menu) {
    return 0;
}

EGbxMenuInputDevice UGbxMenuStack::GetCurrentInputDevice() const {
    return EGbxMenuInputDevice::Unknown;
}

void UGbxMenuStack::Draw() {
}

void UGbxMenuStack::Clear() {
}

UGbxMenuStack::UGbxMenuStack() {
    this->PriorityBase = 100;
    this->PriorityDelta = 10;
    this->PopupMenuPriorityBase = 100;
    this->bStackHasChanged = false;
    this->bIsTicking = false;
    this->bIsDoingMenuInit = false;
    this->bIsDoingMenuDeinit = false;
    this->bIsDoingMenuDeactivate = false;
    this->AxisAsButtonThreshold = 0.10f;
    this->CurrentInputDevice = EGbxMenuInputDevice::Unknown;
    this->bLastInputFromMouse = true;
    this->BlockAllRawInput = 0;
    this->bIsProcessingInput = false;
    this->bProcessingInputCancelled = false;
    this->bStackHidden = false;
    this->PassiveLoadingMenu = NULL;
    this->CachedGameInstance = NULL;
}

