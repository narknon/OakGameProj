#pragma once
#include "CoreMinimal.h"
#include "GbxSignificanceEventData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxSignificanceEventData {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bTestVisibility;
    
    UPROPERTY(Config, EditAnywhere)
    float AlwaysSignificantDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(Config, EditAnywhere)
    float MinScreenPercent;
    
    UPROPERTY(Config, EditAnywhere)
    float DistantThreshold;
    
    UPROPERTY(Config, EditAnywhere)
    float PlayerSourceInfluence;
    
    FGbxSignificanceEventData();
};

