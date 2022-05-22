#pragma once
#include "CoreMinimal.h"
#include "MayhemDebugOverrides.h"
#include "MayhemReplicableSetsData.h"
#include "MayhemModeState.generated.h"

USTRUCT(BlueprintType)
struct FMayhemModeState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    bool bIsActive;
    
    UPROPERTY(Transient)
    int32 MayhemLevel;
    
    UPROPERTY(Transient)
    int32 PendingMayhemLevel;
    
    UPROPERTY(Transient)
    int32 PendingRandomSeed;
    
    UPROPERTY(Transient)
    FMayhemDebugOverrides CachedOptionalOverrides;
    
    UPROPERTY(Transient)
    FMayhemReplicableSetsData ReplicableSets;
    
    UPROPERTY(Transient)
    int32 RandomSeed;
    
public:
    OAKGAME_API FMayhemModeState();
};

