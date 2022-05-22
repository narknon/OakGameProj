#pragma once
#include "CoreMinimal.h"
#include "GbxGFxListCellWithData.h"
#include "GbxGFxListItemComboBox.generated.h"

class UGbxGFxDropDownList;
class UGbxGFxListCell;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxListItemComboBox : public UGbxGFxListCellWithData {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxDropDownList* DropDownListItem;
    
public:
    UGbxGFxListItemComboBox();
private:
    UFUNCTION()
    void OnSelectionUpdated(UGbxGFxListCell* Item);
    
    UFUNCTION()
    void OnOwningListSelectionChanged(UGbxGFxListCell* Item);
    
    UFUNCTION()
    void OnDropDownButtonClicked();
    
};

