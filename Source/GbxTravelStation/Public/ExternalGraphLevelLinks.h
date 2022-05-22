#pragma once
#include "CoreMinimal.h"
#include "ExternalGraphLevelLinks.generated.h"

class ULevelData;

USTRUCT(BlueprintType)
struct FExternalGraphLevelLinks {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TSoftObjectPtr<ULevelData> LevelData;
    
    UPROPERTY(VisibleAnywhere)
    TArray<TSoftObjectPtr<ULevelData>> LinksToOtherLevel;
    
    GBXTRAVELSTATION_API FExternalGraphLevelLinks();
};

