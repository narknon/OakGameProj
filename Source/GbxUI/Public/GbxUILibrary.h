#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GbxUserWidgetDelegateDelegate.h"
#include "GbxListItemDelegateDelegate.h"
#include "GbxUILibrary.generated.h"

class UGbxListItemText;
class UObject;
class UGbxList;
class IGbxList;
class UGbxFullScreenMovie;
class AGbxPlayerController;
class UMediaSource;
class APlayerController;
class UGbxListItemNumber;
class UGbxListItem;
class UGbxListItemComboBox;
class UGbxListItemBoolean;

UCLASS(BlueprintType)
class GBXUI_API UGbxUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxUILibrary();
    UFUNCTION(BlueprintCallable)
    static void SendTextToDebugHUD(const UObject* WorldContextObject, FText Text, FLinearColor Color, int32 TextSize, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static UGbxFullScreenMovie* PlayFullScreenMovie(AGbxPlayerController* GbxPC, UMediaSource* MediaSource, bool bPlayOnceAndDestroy);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemText* CreateTextListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemText* CreateTextListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemNumber* CreateNumberListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemNumber* CreateNumberListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, float InitialValue, float SliderMin, float SliderMax, float SliderStep);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, TSubclassOf<UGbxListItem> ItemClass, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, TSubclassOf<UGbxListItem> ItemClass);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateDefaultListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FGbxUserWidgetDelegate ClickedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItem* CreateDefaultListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemComboBox* CreateComboBoxListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, const TArray<FText>& Items, int32 InitialIndex, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemComboBox* CreateComboBoxListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, const TArray<FText>& Items, int32 InitialIndex);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemBoolean* CreateBooleanListItemWithDelegates(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, bool InitialValue, FGbxListItemDelegate ChangedDelegate, FGbxUserWidgetDelegate SelectedDelegate);
    
    UFUNCTION(BlueprintCallable)
    static UGbxListItemBoolean* CreateBooleanListItem(TScriptInterface<IGbxList> OwningList, APlayerController* OwningPlayer, FText LabelText, bool InitialValue);
    
    UFUNCTION(BlueprintCallable)
    static FString AbbreviateNumberText(float ValueToFormat);
    
};

