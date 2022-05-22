#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReplicatedEject.generated.h"

USTRUCT()
struct FReplicatedEject {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector EjectVel;
    
    OAKGAME_API FReplicatedEject();
};

