#pragma once
#include "CoreMinimal.h"
#include "GbxNavPathingData.generated.h"

class UGbxNavAreaData;
class UHavokPathFindingData;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavPathingData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UGbxNavAreaData* Areas;
    
    UPROPERTY(EditAnywhere)
    UHavokPathFindingData* UserEdges;
    
    FGbxNavPathingData();
};

