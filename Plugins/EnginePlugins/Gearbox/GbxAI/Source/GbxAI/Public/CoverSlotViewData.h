#pragma once
#include "CoreMinimal.h"
#include "CoverLineOfSightData.h"
#include "CoverSlotViewData.generated.h"

class UCoverViewData;

USTRUCT(BlueprintType)
struct FCoverSlotViewData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCoverViewData* View;
    
    UPROPERTY()
    FCoverLineOfSightData LosData;
    
    GBXAI_API FCoverSlotViewData();
};

