#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUserWidget.h"
#include "GbxCascadingListEventDelegate.h"
#include "GbxCascadingListItemData.h"
#include "GbxCascadingList.generated.h"

class UGbxListItem;
class UGbxGridListWidget;

UCLASS(EditInlineNew)
class GBXUI_API UGbxCascadingList : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxListItem> DefaultListItemClass;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UGbxGridListWidget*> ListViews;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxCascadingListEvent OnItemSelected;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxCascadingListEvent OnItemClicked;
    
    UPROPERTY(BlueprintReadWrite)
    FGbxCascadingListEvent OnItemCreated;
    
private:
    UPROPERTY(Export, Transient)
    UGbxGridListWidget* ActiveList;
    
    UPROPERTY(Transient)
    TArray<FGbxCascadingListItemData> NavigationStack;
    
public:
    UGbxCascadingList();
private:
    UFUNCTION()
    void SetActiveList(UGbxGridListWidget* List);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushItems(const TArray<FGbxCascadingListItemData>& Items);
    
    UFUNCTION(BlueprintCallable)
    void Pop();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShiftListsForward();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnShiftListsBack();
    
private:
    UFUNCTION()
    void OnItemSelected_Internal(UGbxListItem* Item);
    
    UFUNCTION()
    void OnItemClicked_Internal(UGbxListItem* Item);
    
public:
    UFUNCTION(BlueprintPure)
    bool HasItems() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetStackDepth() const;
    
    UFUNCTION(BlueprintCallable)
    void Clear();
    
};

