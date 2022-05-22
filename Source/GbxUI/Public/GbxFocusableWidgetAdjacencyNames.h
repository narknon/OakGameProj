#pragma once
#include "CoreMinimal.h"
#include "GbxFocusableWidgetAdjacencyNames.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxFocusableWidgetAdjacencyNames {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString WidgetUpName;
    
    UPROPERTY(EditAnywhere)
    FString WidgetDownName;
    
    UPROPERTY(EditAnywhere)
    FString WidgetLeftName;
    
    UPROPERTY(EditAnywhere)
    FString WidgetRightName;
    
    FGbxFocusableWidgetAdjacencyNames();
};

