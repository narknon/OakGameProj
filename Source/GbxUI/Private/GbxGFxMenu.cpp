#include "GbxGFxMenu.h"

class UGbxFocusableWidget;
class IGbxFocusableWidget;
class UObject;

void UGbxGFxMenu::SetWidgetAdjacency(TScriptInterface<IGbxFocusableWidget> Widget, const FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo) const {
}

void UGbxGFxMenu::SetFocusedWidget(TScriptInterface<IGbxFocusableWidget> WidgetToFocus, bool bFromMouse) const {
}

void UGbxGFxMenu::SetFocusableWidgetAdjancency(TScriptInterface<IGbxFocusableWidget> Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) const {
}

void UGbxGFxMenu::RegisterFocusableWidgetWithAdjacency(TScriptInterface<IGbxFocusableWidget> Widget, UObject* AdjacentUp, UObject* AdjacentDown, UObject* AdjacentLeft, UObject* AdjacentRight) const {
}

void UGbxGFxMenu::RegisterFocusableWidget(TScriptInterface<IGbxFocusableWidget> Widget, const FGbxFocusableWidgetAdjacencyInfo& AdjacencyInfo) const {
}

void UGbxGFxMenu::MenuStack_Clear() const {
}

bool UGbxGFxMenu::IsWidgetFocused(const UObject* WidgetInQuestion) const {
    return false;
}

UObject* UGbxGFxMenu::GetFocusedWidget() const {
    return NULL;
}

UGbxGFxMenu::UGbxGFxMenu() {
    this->DefaultMouseFocusBehavior = EGbxFocusableWidgetMouseBehavior::SelectOnHover;
    this->MenuData = NULL;
    this->HintBarAlignment = EGbxGFxListAlignment::Left;
    this->bCallMenuTickOnlyIfMenuIsStarted = false;
    this->SplitscreenRootOffset = 270.00f;
    this->OwnedContextualMenu = NULL;
    this->ActiveDialog = NULL;
    this->DrawPriority = 0;
    this->FocusManager = NULL;
    this->HintBar = NULL;
    this->HintBarContainer = NULL;
    this->MouseBlockerClip = NULL;
    this->bWantsDismiss = false;
    this->bCachedLastInputFromMouse = false;
    this->bReceiveMouseEvenIfNotActive = false;
    this->bIsInitedFromStash = false;
    this->bMouseHitsAllowedYet = false;
    this->bGotFirstMouseMove = false;
    this->MenuContentClip = NULL;
    this->MenuLayoutsClip = NULL;
    this->MenuLayoutClip = NULL;
    this->bIsSplitScreenLayout = false;
    this->bBlockPauseMenu = false;
    this->bGFxMenuWasStarted = false;
    this->LastFocusedButton = NULL;
}

