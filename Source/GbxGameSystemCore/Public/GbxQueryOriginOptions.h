#pragma once
#include "CoreMinimal.h"
#include "GbxParam.h"
#include "GbxQueryOriginOptions.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxQueryOriginOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxParam UpdatePeriod;
    
    UPROPERTY(EditAnywhere)
    FGbxParam UpdateCondition;
    
    UPROPERTY(EditAnywhere)
    bool bInvertCondition;
    
    FGbxQueryOriginOptions();
};

