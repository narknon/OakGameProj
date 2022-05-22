#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "GbxUserWidgetDelegateDelegate.h"
#include "GbxListItemDelegateDelegate.h"
#include "GbxListItemFactory.generated.h"

class UGbxListItem;
class UGbxListItemText;
class UGbxListItemBoolean;
class UGbxList;
class IGbxList;
class UGbxListItemNumber;
class UGbxListItemComboBox;
class APlayerController;

UCLASS(BlueprintType)
class GBXUI_API UGbxListItemFactory : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxListItem> DefaultListItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxListItemText> BasicTextListItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxListItemBoolean> BooleanListItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxListItemNumber> NumberListItem;
    
    UPROPERTY(EditDefaultsOnly)
    TSubclassOf<UGbxListItemComboBox> ComboBoxListItem;
    
    UGbxListItemFactory();
    UFUNCTION(BlueprintCallable)
    UGbxListItemText* CreateTextItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItemNumber* CreateNumberItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateItemWithDelegates(APlayerController* Owner, TScriptInterface<IGbxList> Parent, TSubclassOf<UGbxListItem> ItemClass, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, TSubclassOf<UGbxListItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItemComboBox* CreateComboBoxItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, const TArray<FText>& Items, int32 InitialIndex, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItemBoolean* CreateBooleanItem(APlayerController* Owner, TScriptInterface<IGbxList> Parent, FText LabelText, bool InitialValue, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
};

