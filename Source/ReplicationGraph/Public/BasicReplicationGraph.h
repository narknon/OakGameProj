#pragma once
#include "CoreMinimal.h"
#include "ConnectionAlwaysRelevantNodePair.h"
#include "ReplicationGraph.h"
#include "BasicReplicationGraph.generated.h"

class UReplicationGraphNode_GridSpatialization2D;
class UReplicationGraphNode_ActorList;
class AActor;

UCLASS(NonTransient)
class UBasicReplicationGraph : public UReplicationGraph {
    GENERATED_BODY()
public:
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UReplicationGraphNode_ActorList* AlwaysRelevantNode;
    
    UPROPERTY()
    TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList;
    
    UPROPERTY()
    TArray<AActor*> ActorsWithoutNetConnection;
    
    UBasicReplicationGraph();
};

