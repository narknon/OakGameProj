#pragma once
#include "CoreMinimal.h"
#include "DevMapToMapId.generated.h"

USTRUCT(BlueprintType)
struct FDevMapToMapId {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName DevMapName;
    
    UPROPERTY()
    uint32 MapID;
    
    OAKGAME_API FDevMapToMapId();
};

