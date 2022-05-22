#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "GbxComboBoxItemInfo.h"
#include "GbxComboBoxDropdownMenu.generated.h"

class UWidget;
class UGbxGridListWidget;
class UGbxListItem;
class UGbxComboBox;

UCLASS(EditInlineNew)
class GBXUI_API UGbxComboBoxDropdownMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGbxComboBoxItemInfo> ChoiceListArray;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UWidget* ChoiceListContainer;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxGridListWidget* ChoiceList;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UGbxComboBox> ComboBoxOwner;
    
    UGbxComboBoxDropdownMenu();
    UFUNCTION()
    void OnChoiceClicked(UGbxListItem* ListItem);
    
    UFUNCTION(BlueprintCallable)
    void DismissWithoutChanging();
    
};

