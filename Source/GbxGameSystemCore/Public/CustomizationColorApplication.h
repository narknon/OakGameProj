#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizationColorApplication.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCustomizationColorApplication {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bUseDefaultColor;
    
    UPROPERTY()
    bool bUseDefaultSplitColor;
    
    UPROPERTY()
    bool bSupportsSplitColor;
    
    UPROPERTY()
    FVector AppliedColor;
    
    UPROPERTY()
    FVector SplitColor;
    
    UPROPERTY()
    FVector DefaultColor;
    
    UPROPERTY()
    FVector DefaultSplitColor;
    
    FCustomizationColorApplication();
};

