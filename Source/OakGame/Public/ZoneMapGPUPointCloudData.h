#pragma once
#include "CoreMinimal.h"
#include "ZoneMapGPUPointCloudData.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct OAKGAME_API FZoneMapGPUPointCloudData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* PositionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UTexture* NormalsData;
    
    FZoneMapGPUPointCloudData();
};

