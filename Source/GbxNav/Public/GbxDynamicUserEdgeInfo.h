#pragma once
#include "CoreMinimal.h"
#include "GbxDynamicUserEdgeInfo.generated.h"

class UGbxNavUserEdgeTrailComponent;

USTRUCT(BlueprintType)
struct FGbxDynamicUserEdgeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UGbxNavUserEdgeTrailComponent* Component;
    
    GBXNAV_API FGbxDynamicUserEdgeInfo();
};

