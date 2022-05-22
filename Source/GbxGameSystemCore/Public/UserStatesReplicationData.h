#pragma once
#include "CoreMinimal.h"
#include "UserStatesReplicationData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FUserStatesReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bInitialized;
    
    UPROPERTY()
    uint32 PackedStateBits;
    
    FUserStatesReplicationData();
};

