#pragma once
#include "CoreMinimal.h"
#include "GbxMenuSwitcher.h"
#include "GbxMenuInputEvent.h"
#include "GbxDebugMenu.generated.h"

class UGbxGridListWidget;
class UPanelWidget;
class UBUTTON;
class UGbxUserWidget;

UCLASS(EditInlineNew, Config=GbxUI)
class GBXUI_API UGbxDebugMenu : public UGbxMenuSwitcher {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxGridListWidget* CategoryList;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UBUTTON* CloseButton;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UPanelWidget* SubmenuContainer;
    
private:
    UPROPERTY(GlobalConfig)
    TArray<FName> HiddenSubmenus;
    
public:
    UGbxDebugMenu();
    UFUNCTION()
    void OnCloseClicked();
    
    UFUNCTION()
    void OnCategorySelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
};

