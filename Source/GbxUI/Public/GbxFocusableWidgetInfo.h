#pragma once
#include "CoreMinimal.h"
#include "GbxFocusableWidgetAdjacencyInfo.h"
#include "GbxFocusableWidgetInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxFocusableWidgetInfo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TWeakObjectPtr<UObject> Widget;
    
    UPROPERTY()
    FGbxFocusableWidgetAdjacencyInfo AdjacencyInfo;
    
    FGbxFocusableWidgetInfo();
};

