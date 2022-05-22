#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxUserWidget.h"
#include "OakAbilityDebugMenuCascadingList.generated.h"

class UGbxListItem;
class UGbxListItemText_CharacterDebugMenu;
class UGbxGridListWidget;

UCLASS(EditInlineNew)
class UOakAbilityDebugMenuCascadingList : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxListItemText_CharacterDebugMenu> DefaultListItemClass;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    TArray<UGbxGridListWidget*> ListViews;
    
private:
    UPROPERTY(Export, Transient)
    UGbxGridListWidget* ActiveList;
    
public:
    UOakAbilityDebugMenuCascadingList();
private:
    UFUNCTION()
    void SetActiveList(UGbxGridListWidget* List);
    
    UFUNCTION()
    void OnItemSelected_Internal(UGbxListItem* Item);
    
    UFUNCTION()
    void OnItemClicked_Internal(UGbxListItem* Item);
    
};

