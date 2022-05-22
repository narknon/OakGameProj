#pragma once
#include "CoreMinimal.h"
#include "AntiRollBarData.generated.h"

USTRUCT(BlueprintType)
struct GBXVEHICLE_API FAntiRollBarData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 WheelIndex1;
    
    UPROPERTY(EditAnywhere)
    int32 WheelIndex2;
    
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    FAntiRollBarData();
};

