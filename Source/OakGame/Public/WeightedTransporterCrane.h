#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeightedTransporterCrane.generated.h"

class ATransporterCrane;

USTRUCT(BlueprintType)
struct FWeightedTransporterCrane {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<ATransporterCrane> Crane;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Weight;
    
    OAKGAME_API FWeightedTransporterCrane();
};

