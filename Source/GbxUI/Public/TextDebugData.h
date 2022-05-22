#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TextDebugData.generated.h"

USTRUCT()
struct FTextDebugData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayText;
    
    UPROPERTY(EditAnywhere)
    float DisplayTime;
    
    UPROPERTY(EditAnywhere)
    int32 DisplaySize;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DisplayColor;
    
    GBXUI_API FTextDebugData();
};

