#pragma once
#include "CoreMinimal.h"
#include "CustomizationColorEntry.generated.h"

class UGbxCustomizationTargetData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FCustomizationColorEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UGbxCustomizationTargetData*> ColorCustomizationTargets;
    
    UPROPERTY(EditAnywhere)
    FName ColorCustomizationParameter;
    
    UPROPERTY(EditAnywhere)
    FName SplitColorCustomizationParameter;
    
    UPROPERTY(EditAnywhere)
    FText ColorCustomizationDisplayName;
    
    FCustomizationColorEntry();
};

