#pragma once
#include "CoreMinimal.h"
#include "DefaultCrosshairData.generated.h"

USTRUCT(BlueprintType)
struct FDefaultCrosshairData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float XSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YSpread;
    
    OAKGAME_API FDefaultCrosshairData();
};

