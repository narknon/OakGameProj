#pragma once
#include "CoreMinimal.h"
#include "GbxUserEdgeData.generated.h"

class UHavokUserEdgeComponent;

USTRUCT(BlueprintType)
struct FGbxUserEdgeData {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UHavokUserEdgeComponent* Edge;
    
    GBXNAV_API FGbxUserEdgeData();
};

