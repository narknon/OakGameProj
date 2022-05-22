#pragma once
#include "CoreMinimal.h"
#include "ArticulatedRigidBodyState.h"
#include "RagdollReplicationData.generated.h"

USTRUCT()
struct GBXGAMESYSTEMCORE_API FRagdollReplicationData {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FArticulatedRigidBodyState> Bodies;
    
    FRagdollReplicationData();
};

