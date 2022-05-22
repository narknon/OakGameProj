#pragma once
#include "CoreMinimal.h"
#include "AimControlParameters.generated.h"

class UAimControlData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FAimControlParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAimControlData* AimControlData;
    
    FAimControlParameters();
};

