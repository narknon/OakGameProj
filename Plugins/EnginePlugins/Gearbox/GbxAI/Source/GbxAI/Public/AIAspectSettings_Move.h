#pragma once
#include "CoreMinimal.h"
#include "AIAspectSettings_Move.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FAIAspectSettings_Move {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PathUpdateThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bStopWhenInPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowStrafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bAllowPartialPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRequireDirectPath;
    
    FAIAspectSettings_Move();
};

