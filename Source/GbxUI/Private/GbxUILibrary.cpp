#include "GbxUILibrary.h"
#include "Templates/SubclassOf.h"

class UGbxFullScreenMovie;
class UObject;
class APlayerController;
class AGbxPlayerController;
class UGbxList;
class IGbxList;
class UMediaSource;
class UGbxListItemText;
class UGbxListItemNumber;
class UGbxListItem;
class UGbxListItemComboBox;
class UGbxListItemBoolean;

void UGbxUILibrary::SendTextToDebugHUD(const UObject* WorldContextObject, FText Text, FLinearColor Color, int32 TextSize, float Duration) {
}

UGbxFullScreenMovie* UGbxUILibrary::PlayFullScreenMovie(AGbxPlayerController* GbxPC, UMediaSource* MediaSource, bool bPlayOnceAndDestroy) {
    return NULL;
}

UGbxListItemText* UGbxUILibrary::CreateTextListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemText* UGbxUILibrary::CreateTextListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText) {
    return NULL;
}

UGbxListItemNumber* UGbxUILibrary::CreateNumberListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemNumber* UGbxUILibrary::CreateNumberListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep) {
    return NULL;
}

UGbxListItem* UGbxUILibrary::CreateListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, TSubclassOf<UGbxListItem> ItemClass, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItem* UGbxUILibrary::CreateListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, TSubclassOf<UGbxListItem> ItemClass) {
    return NULL;
}

UGbxListItem* UGbxUILibrary::CreateDefaultListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItem* UGbxUILibrary::CreateDefaultListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer) {
    return NULL;
}

UGbxListItemComboBox* UGbxUILibrary::CreateComboBoxListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, const TArray<FText>& Items, int32 InitialIndex, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemComboBox* UGbxUILibrary::CreateComboBoxListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, const TArray<FText>& Items, int32 InitialIndex) {
    return NULL;
}

UGbxListItemBoolean* UGbxUILibrary::CreateBooleanListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, bool InitialValue, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemBoolean* UGbxUILibrary::CreateBooleanListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, bool InitialValue) {
    return NULL;
}

FString UGbxUILibrary::AbbreviateNumberText(float ValueToFormat) {
    return TEXT("");
}

UGbxUILibrary::UGbxUILibrary() {
}

