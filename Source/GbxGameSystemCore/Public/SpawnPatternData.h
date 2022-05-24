#pragma once
#include "CoreMinimal.h"
#include "SpawnPatternResult.h"
#include "GbxDataAsset.h"
#include "SpawnPatternInputs.h"
#include "SpawnPatternData.generated.h"

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API USpawnPatternData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    USpawnPatternData();
    UFUNCTION(BlueprintPure)
    void CalculateSpawnPoint(FSpawnPatternInputs Inputs, FSpawnPatternResult& Result) const;
    
};

