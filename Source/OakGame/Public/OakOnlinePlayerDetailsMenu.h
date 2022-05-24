#pragma once
#include "CoreMinimal.h"
#include "GbxUmgMenu.h"
#include "OakOnlineLobbyPlayerInfo.h"
#include "OakOnlinePlayerDetailsMenu.generated.h"

class UGbxListItem;
class UGbxScrollBoxList;
class UTextBlock;

UCLASS(EditInlineNew)
class UOakOnlinePlayerDetailsMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export)
    UGbxScrollBoxList* ChoiceList;
    
    UPROPERTY(BlueprintReadWrite, Export)
    UTextBlock* HintText;
    
    UPROPERTY()
    TArray<FName> ChoiceIds;
    
    UOakOnlinePlayerDetailsMenu();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetupDetailsWidget(const FOakOnlineLobbyPlayerInfo& PlayerInfo);
    
    UFUNCTION()
    void OnChoiceClicked(UGbxListItem* ListItem);
    
};

