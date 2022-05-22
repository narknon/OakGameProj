#pragma once
#include "CoreMinimal.h"
#include "GFxWidgetBinding.generated.h"

USTRUCT(BlueprintType)
struct SCALEFORMUI_API FGFxWidgetBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName WidgetName;
    
    UPROPERTY()
    UClass* WidgetClass;
    
    FGFxWidgetBinding();
};

