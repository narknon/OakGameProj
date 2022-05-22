#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "WeightedActorPartData.generated.h"

class UActorPartData;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FWeightedActorPartData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditInstanceOnly)
    UActorPartData* PartData;
    
    UPROPERTY(EditInstanceOnly)
    FAttributeInitializationData Weight;
    
public:
    FWeightedActorPartData();
};

