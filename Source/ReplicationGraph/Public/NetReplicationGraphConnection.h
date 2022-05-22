#pragma once
#include "CoreMinimal.h"
#include "Engine/ReplicationDriver.h"
#include "NetReplicationGraphConnection.generated.h"

class UReplicationGraphNode;
class UNetConnection;
class AReplicationGraphDebugActor;
class UReplicationGraphNode_TearOff_ForConnection;
class AActor;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UNetReplicationGraphConnection : public UReplicationConnectionDriver {
    GENERATED_BODY()
public:
    UPROPERTY()
    UNetConnection* NetConnection;
    
    UPROPERTY()
    AReplicationGraphDebugActor* DebugActor;
    
private:
    UPROPERTY()
    TArray<UReplicationGraphNode*> ConnectionGraphNodes;
    
    UPROPERTY()
    UReplicationGraphNode_TearOff_ForConnection* TearOffNode;
    
    UPROPERTY()
    TArray<AActor*> NonReplicatedDormantActors;
    
public:
    UNetReplicationGraphConnection();
};

