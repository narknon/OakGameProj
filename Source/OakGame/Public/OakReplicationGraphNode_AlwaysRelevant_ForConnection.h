#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "OakReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

UCLASS(NonTransient)
class UOakReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UOakReplicationGraphNode_AlwaysRelevant_ForConnection();
};

