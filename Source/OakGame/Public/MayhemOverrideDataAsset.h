#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MayhemModeTwoLevelOverride.h"
#include "MayhemOverrideDataAsset.generated.h"

UCLASS()
class OAKGAME_API UMayhemOverrideDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 MaxMayhemLevelOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<FMayhemModeTwoLevelOverride> PerLevelOverrides;
    
    UMayhemOverrideDataAsset();
};

