#pragma once
#include "CoreMinimal.h"
#include "UIStatPriorityData.generated.h"

class UUIStatData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUIStatPriorityData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UUIStatData* UIStat;
    
    UPROPERTY(EditAnywhere)
    float PriorityIncrease;
    
    FUIStatPriorityData();
};

