#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/NetSerialization.h"
#include "GoreRegionEventSummary.generated.h"

USTRUCT(BlueprintType)
struct FGoreRegionEventSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize HitLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantizeNormal HitDirection;
    
    UPROPERTY(BlueprintReadOnly)
    FVector_NetQuantize Origin;
    
    UPROPERTY(BlueprintReadOnly)
    float Radius;
    
    UPROPERTY()
    int32 GoreRegionIndex;
    
    OAKGAME_API FGoreRegionEventSummary();
};

