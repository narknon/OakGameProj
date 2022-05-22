#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "SpawnDLCItem.generated.h"

class USpawnDLCData;

USTRUCT(BlueprintType)
struct GBXSPAWN_API FSpawnDLCItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<USpawnDLCData> Data;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData IsEnabled;
    
    FSpawnDLCItem();
};

