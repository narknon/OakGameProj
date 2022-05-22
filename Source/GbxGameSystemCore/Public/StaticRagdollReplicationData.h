#pragma once
#include "CoreMinimal.h"
#include "MinimalStaticRigidBodyState.h"
#include "StaticRagdollReplicationData.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FStaticRagdollReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMinimalStaticRigidBodyState> Bodies;
    
    FStaticRagdollReplicationData();
};

