#pragma once
#include "CoreMinimal.h"
#include "MayhemReplicableSetsData.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FMayhemReplicableSetsData {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    int32 ActiveSetsBits;
    
    FMayhemReplicableSetsData();
};

