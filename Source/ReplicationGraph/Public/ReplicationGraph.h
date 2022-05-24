#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/ReplicationDriver.h"
#include "ReplicationGraph.generated.h"

class UNetReplicationGraphConnection;
class UNetDriver;
class UReplicationGraphNode;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraph : public UReplicationDriver {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    TSubclassOf<UNetReplicationGraphConnection> ReplicationConnectionManagerClass;
    
    UPROPERTY()
    UNetDriver* NetDriver;
    
    UPROPERTY()
    TArray<UNetReplicationGraphConnection*> Connections;
    
    UPROPERTY()
    TArray<UNetReplicationGraphConnection*> PendingConnections;
    
protected:
    UPROPERTY()
    TArray<UReplicationGraphNode*> GlobalGraphNodes;
    
    UPROPERTY()
    TArray<UReplicationGraphNode*> PrepareForReplicationNodes;
    
public:
    UReplicationGraph();
};

