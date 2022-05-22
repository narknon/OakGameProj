#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MantleAttemptInfo.generated.h"

class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FMantleAttemptInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 ActionIndex;
    
    UPROPERTY(Transient)
    FVector Location;
    
    UPROPERTY(Export, Transient)
    UPrimitiveComponent* MovementBase;
    
    FMantleAttemptInfo();
};

