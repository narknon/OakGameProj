#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "GbxHUDContainer.generated.h"

class AGbxHUD;
class AGbxPlayerController;
class UCanvasPanel;

UCLASS(EditInlineNew)
class GBXUI_API UGbxHUDContainer : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UCanvasPanel* RootPanel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxPlayerController* OwningPlayerController;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxHUD* OwningHUD;
    
    UPROPERTY(EditAnywhere)
    int32 ProjectedContainerZOrder;
    
    UPROPERTY(Export, Transient)
    UCanvasPanel* DebugPanel;
    
    UGbxHUDContainer();
    UFUNCTION(BlueprintImplementableEvent)
    void HandleInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDeinit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleActivate();
    
};

