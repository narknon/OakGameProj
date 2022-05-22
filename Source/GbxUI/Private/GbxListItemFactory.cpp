#include "GbxListItemFactory.h"
#include "Templates/SubclassOf.h"

class APlayerController;
class UGbxListItemNumber;
class UGbxList;
class IGbxList;
class UGbxListItemText;
class UGbxListItem;
class UGbxListItemComboBox;
class UGbxListItemBoolean;

UGbxListItemText* UGbxListItemFactory::CreateTextItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemNumber* UGbxListItemFactory::CreateNumberItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItem* UGbxListItemFactory::CreateItemWithDelegates(APlayerController* Owner, TScriptInterface<IGbxList> Parent, TSubclassOf<UGbxListItem> ItemClass, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItem* UGbxListItemFactory::CreateItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, TSubclassOf<UGbxListItem> ItemClass) {
    return NULL;
}

UGbxListItemComboBox* UGbxListItemFactory::CreateComboBoxItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, const TArray<FText>& Items, int32 InitialIndex, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemBoolean* UGbxListItemFactory::CreateBooleanItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, bool InitialValue, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate) {
    return NULL;
}

UGbxListItemFactory::UGbxListItemFactory() {
    this->DefaultListItem = NULL;
    this->BasicTextListItem = NULL;
    this->BooleanListItem = NULL;
    this->NumberListItem = NULL;
    this->ComboBoxListItem = NULL;
}

