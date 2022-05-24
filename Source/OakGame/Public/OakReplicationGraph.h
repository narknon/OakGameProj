#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraph.h"
#include "OakReplicationGraph.generated.h"

class AActor;
class UReplicationGraphNode_GridSpatialization2D;
class UOakReplicationGraphNode_AlwaysRelevant;

UCLASS(NonTransient)
class UOakReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UOakReplicationGraphNode_AlwaysRelevant* AlwaysRelevantNode;
    
    UPROPERTY()
    TArray<AActor*> ActorsPendingAddToGraph;
    
    UOakReplicationGraph();
};

