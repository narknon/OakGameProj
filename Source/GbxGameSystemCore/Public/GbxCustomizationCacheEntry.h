#pragma once
#include "CoreMinimal.h"
#include "GbxCustomizationCacheEntry.generated.h"

class UObject;
class UGbxCustomizationData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FGbxCustomizationCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<UObject*> AssetRefs;
    
    UPROPERTY()
    UGbxCustomizationData* CustomizationData;
    
    FGbxCustomizationCacheEntry();
};

