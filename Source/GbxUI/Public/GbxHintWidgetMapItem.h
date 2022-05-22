#pragma once
#include "CoreMinimal.h"
#include "GbxHintWidgetMapItem.generated.h"

class UObject;
class UGbxHintWidget;
class IGbxHintWidget;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxHintWidgetMapItem {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FName> InputActions;
    
    UPROPERTY()
    bool bIsEnabled;
    
    UPROPERTY()
    UObject* HintWidget;
    
    UPROPERTY()
    TScriptInterface<IGbxHintWidget> HintWidgetInterface;
    
    FGbxHintWidgetMapItem();
};

