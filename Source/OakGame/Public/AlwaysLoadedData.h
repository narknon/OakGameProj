#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AlwaysLoadedData.generated.h"

class UObject;

UCLASS()
class UAlwaysLoadedData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<TSoftObjectPtr<UObject>> AlwaysLoadedAssets;
    
    UAlwaysLoadedData();
};

