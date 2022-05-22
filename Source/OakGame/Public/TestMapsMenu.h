#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxUmgMenu.h"
#include "TestMapsMenu.generated.h"

class UGbxUmgMenuData;
class UGbxListItemText;
class UGbxScrollBoxList;
class UGbxUserWidget;

UCLASS(EditInlineNew, Config=Game)
class UTestMapsMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxListItemText* BackItem;
    
    UPROPERTY(Config)
    TArray<FText> MapCategories;
    
public:
    UPROPERTY(EditDefaultsOnly)
    UGbxUmgMenuData* SubMenuData;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxScrollBoxList* ContentPanel;
    
    UTestMapsMenu();
    UFUNCTION()
    void OnTestMapDLCNameSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnTestMapCategorySelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
};

