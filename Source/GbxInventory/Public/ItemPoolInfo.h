#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "ItemPoolInfo.generated.h"

class UItemPoolPartSelectionOverrideData;
class UItemPoolData;

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FItemPoolInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UItemPoolData* ItemPool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData PoolProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAttributeInitializationData NumberOfTimesToSelectFromThisPool;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UItemPoolPartSelectionOverrideData*> PartSelectionOverrides;
    
public:
    FItemPoolInfo();
};

