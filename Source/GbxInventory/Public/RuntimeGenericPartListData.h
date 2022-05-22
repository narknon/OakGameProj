#pragma once
#include "CoreMinimal.h"
#include "WeightedActorPartData.h"
#include "RuntimeGenericPartListData.generated.h"

USTRUCT(BlueprintType)
struct GBXINVENTORY_API FRuntimeGenericPartListData {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool bEnabled;
    
    UPROPERTY()
    TArray<FWeightedActorPartData> PartList;
    
public:
    FRuntimeGenericPartListData();
};

