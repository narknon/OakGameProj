#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TargetLocationData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FTargetLocationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FVector TargetBoundsCenter;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TargetBoundsRadius;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float TargetBoundsHalfHeight;
    
    FTargetLocationData();
};

