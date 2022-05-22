#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "OnlineNetworkOptionData.h"
#include "OakOnlineNetworkOptionsMenu.generated.h"

class UGbxGridListWidget;
class UGbxListItem;

UCLASS(EditInlineNew)
class UOakOnlineNetworkOptionsMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxGridListWidget* NetworkOptionList;
    
private:
    UPROPERTY(Transient)
    TArray<FOnlineNetworkOptionData> OptionItemData;
    
public:
    UOakOnlineNetworkOptionsMenu();
private:
    UFUNCTION()
    void OnOptionSelected(UGbxListItem* SelectedItem);
    
    UFUNCTION()
    void OnOptionClicked(UGbxListItem* ClickedItem);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void HandleOptionSelected(UGbxListItem* SelectedItem, const FOnlineNetworkOptionData& Data);
    
};

