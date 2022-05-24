#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_ConnectionDormanyNode.generated.h"

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_ConnectionDormanyNode : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UReplicationGraphNode_ConnectionDormanyNode();
};

