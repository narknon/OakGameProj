#pragma once
#include "CoreMinimal.h"
#include "LookAroundRandomlySettings.generated.h"

USTRUCT(BlueprintType)
struct FLookAroundRandomlySettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinAngleChangeEachIterationDeg;
    
    UPROPERTY(EditAnywhere)
    float MaxAngleChangeEachIterationDeg;
    
    UPROPERTY(EditAnywhere)
    float MaxTimeSpentEachScan;
    
    GBXAI_API FLookAroundRandomlySettings();
};

