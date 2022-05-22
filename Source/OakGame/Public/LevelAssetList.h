#pragma once
#include "CoreMinimal.h"
#include "LevelAssetList.generated.h"

USTRUCT(BlueprintType)
struct FLevelAssetList {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName LevelPackage;
    
    UPROPERTY()
    TArray<FName> AssetNames;
    
    OAKGAME_API FLevelAssetList();
};

