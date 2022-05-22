#pragma once
#include "CoreMinimal.h"
#include "GbxMenuInputEvent.h"
#include "GbxUmgMenu.h"
#include "Engine/EngineTypes.h"
#include "DemoMenu.generated.h"

class UGbxListItemText;
class UGbxScrollBoxList;
class UGbxUserWidget;

UCLASS(EditInlineNew, Config=Game)
class UDemoMenu : public UGbxUmgMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, Transient)
    UGbxListItemText* BackItem;
    
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UGbxScrollBoxList* ContentPanel;
    
private:
    UPROPERTY(Transient)
    FTimerHandle DemoMenuHideTimerHandle;
    
public:
    UDemoMenu();
    UFUNCTION()
    void OnDemoSaveSelected(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
    UFUNCTION()
    void OnBackClicked(UGbxUserWidget* Widget, const FGbxMenuInputEvent& InputInfo);
    
private:
    UFUNCTION()
    void ClientConnectTimedout();
    
};

