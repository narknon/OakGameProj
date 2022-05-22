#pragma once
#include "CoreMinimal.h"
#include "GbxFocusableWidgetAdjacencyInfo.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct GBXUI_API FGbxFocusableWidgetAdjacencyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> WidgetUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> WidgetDown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> WidgetLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TWeakObjectPtr<UObject> WidgetRight;
    
    FGbxFocusableWidgetAdjacencyInfo();
};

