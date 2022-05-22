#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "Layout/Geometry.h"
#include "GbxHUDWidget.generated.h"

class AGbxPlayerController;
class AGbxHUD;
class UGbxHUDContainer;

UCLASS(EditInlineNew)
class GBXUI_API UGbxHUDWidget : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Transient)
    FGeometry CachedGeometry;
    
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    UGbxHUDContainer* OwningHUDContainer;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxHUD* OwningHUD;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    AGbxPlayerController* OwningPlayerController;
    
    UGbxHUDWidget();
    UFUNCTION(BlueprintImplementableEvent)
    void HandleInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDeinit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleDeactivate();
    
    UFUNCTION(BlueprintImplementableEvent)
    void HandleActivate();
    
};

