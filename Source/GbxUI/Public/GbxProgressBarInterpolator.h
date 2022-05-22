#pragma once
#include "CoreMinimal.h"
#include "GbxEasingFunc.h"
#include "GbxProgressBarInterpolator.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxProgressBarInterpolator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Delay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGbxEasingFunc EasingFunc;
    
    UPROPERTY(BlueprintReadOnly)
    float StartValue;
    
    UPROPERTY(BlueprintReadOnly)
    float CurrentValue;
    
    UPROPERTY(BlueprintReadOnly)
    float EndValue;
    
    UPROPERTY(BlueprintReadOnly)
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadOnly)
    float DeltaEndOverride;
    
    FGbxProgressBarInterpolator();
};

