#pragma once
#include "CoreMinimal.h"
#include "HUDStateChangedEventDelegate.h"
#include "GbxHUDStateManager.generated.h"

class UGbxHUDStateData;
class UGbxGFxHUDWidget;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxHUDStateManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHUDStateChangedEvent OnStateChanged;
    
    UPROPERTY(Transient)
    TArray<UGbxHUDStateData*> StateStack;
    
    UPROPERTY(Transient)
    TArray<UGbxGFxHUDWidget*> Widgets;
    
    FGbxHUDStateManager();
};

