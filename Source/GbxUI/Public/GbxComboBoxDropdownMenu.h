#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "GbxComboBoxItemInfo.h"
#include "GbxComboBoxDropdownMenu.generated.h"

class UGbxComboBox;
class UGbxGridListWidget;
class UWidget;
class UGbxListItem;

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

