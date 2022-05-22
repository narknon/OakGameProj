#pragma once
#include "CoreMinimal.h"
#include "ECoverAdjustFailReason.h"
#include "CoverSlotViewFailData.generated.h"

class UCoverViewData;

USTRUCT(BlueprintType)
struct FCoverSlotViewFailData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCoverViewData* View;
    
    UPROPERTY()
    ECoverAdjustFailReason FailReason;
    
    UPROPERTY()
    FString FailDescription;
    
    GBXAI_API FCoverSlotViewFailData();
};

