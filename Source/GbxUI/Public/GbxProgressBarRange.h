#pragma once
#include "CoreMinimal.h"
#include "GbxProgressBarRange.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxProgressBarRange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Min;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Max;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIncreasing;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDecreasing;
    
    FGbxProgressBarRange();
};

