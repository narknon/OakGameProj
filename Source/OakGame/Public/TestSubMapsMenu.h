#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxUmgMenu.h"
#include "TestSubMapsMenu.generated.h"

class UGbxListItemText;
class UGbxScrollBoxList;
class UGbxUserWidget;

UCLASS(EditInlineNew, Config=Game)
class UTestSubMapsMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxListItemText* BackItem;
    
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxScrollBoxList* ContentPanel;
    
    UTestSubMapsMenu();
    UFUNCTION()
    void OnTestMapSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
};

