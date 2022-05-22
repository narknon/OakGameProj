#pragma once
#include "CoreMinimal.h"
#include "TerritoryData.generated.h"

class AVolume;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FTerritoryData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEverywhere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AVolume*> Volumes;
    
    FTerritoryData();
};

