#pragma once
#include "CoreMinimal.h"
#include "ECohtmlImageFormat.h"
#include "SingleFormatFallbacks.generated.h"

USTRUCT(BlueprintType)
struct FSingleFormatFallbacks {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ECohtmlImageFormat BaseFormat;
    
    UPROPERTY(EditAnywhere)
    TArray<ECohtmlImageFormat> PossibleFallbacks;
    
    COHTMLPLUGIN_API FSingleFormatFallbacks();
};

