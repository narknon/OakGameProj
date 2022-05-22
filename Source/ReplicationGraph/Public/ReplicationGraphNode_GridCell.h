#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_GridCell.generated.h"

class UReplicationGraphNode_ActorListFrequencyBuckets;
class UReplicationGraphNode_DormancyNode;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_GridCell : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UReplicationGraphNode_ActorListFrequencyBuckets* DynamicNode;
    
    UPROPERTY()
    UReplicationGraphNode_DormancyNode* DormancyNode;
    
public:
    UReplicationGraphNode_GridCell();
};

