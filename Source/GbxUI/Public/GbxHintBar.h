#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GbxHintInfo.h"
#include "GbxHintWidgetMapItem.h"
#include "GbxHintBar.generated.h"

class UGbxMenu;
class IGbxMenu;
class UGbxHintBarWidgetContainer;
class IGbxHintBarWidgetContainer;

UCLASS(BlueprintType)
class GBXUI_API UGbxHintBar : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UObject* Container;
    
    UPROPERTY()
    TScriptInterface<IGbxHintBarWidgetContainer> ContainerInterface;
    
    UPROPERTY()
    TScriptInterface<IGbxMenu> MenuOwner;
    
    UPROPERTY()
    TArray<FGbxHintInfo> HintInfos;
    
    UPROPERTY()
    TArray<FGbxHintWidgetMapItem> StagePlacedHints;
    
    UPROPERTY()
    bool bAreHintsVisible;
    
    UPROPERTY()
    bool bIsInputBlocked;
    
    UPROPERTY()
    bool bHideOnOwnerMenuDeactivate;
    
    UPROPERTY()
    bool bSendInputActionEvenIfOwnerIsDeactivated;
    
    UGbxHintBar();
    UFUNCTION(BlueprintCallable)
    void OnHintClicked(const FName& InputAction, bool bHeld);
    
};

