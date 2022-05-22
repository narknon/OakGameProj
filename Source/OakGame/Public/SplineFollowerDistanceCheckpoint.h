#pragma once
#include "CoreMinimal.h"
#include "SplineFollowerDistanceCheckpoint.generated.h"

USTRUCT(BlueprintType)
struct FSplineFollowerDistanceCheckpoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Distance;
    
    OAKGAME_API FSplineFollowerDistanceCheckpoint();
};

