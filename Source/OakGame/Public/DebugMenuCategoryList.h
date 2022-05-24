#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "DebugMenuCommandItemData.h"
#include "GbxMenuInputEvent.h"
#include "GbxUserWidgetDelegateDelegate.h"
#include "DebugMenuCategoryList.generated.h"

class UGbxListItem;
class UGbxScrollBoxList;
class UTextBlock;

UCLASS(EditInlineNew)
class UDebugMenuCategoryList : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxScrollBoxList* CommandList;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* DescriptionText;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UTextBlock* CommandText;
    
private:
    UPROPERTY(Transient)
    TArray<FDebugMenuCommandItemData> CommandListItemData;
    
public:
    UDebugMenuCategoryList();
    UFUNCTION(BlueprintCallable)
    void RemoveAllItems();
    
protected:
    UFUNCTION()
    void OnExecItemActivated(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnCommandItemSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    UGbxListItem* AddExecItem(FText Label, FText Description, const FString& Command);
    
    UFUNCTION(BlueprintCallable)
    void AddConfigExecItems(const FName& CategoryName);
    
    UFUNCTION(BlueprintCallable)
    UGbxListItem* AddCommandItem(FText Label, FText Description, FGbxUserWidgetDelegate OnActivate);
    
};

