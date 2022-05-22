#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "ReplicationGraphNode_AlwaysRelevant_ForConnection.generated.h"

class AActor;

UCLASS(NonTransient)
class REPLICATIONGRAPH_API UReplicationGraphNode_AlwaysRelevant_ForConnection : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
    UPROPERTY()
    AActor* LastViewer;
    
    UPROPERTY()
    AActor* LastViewTarget;
    
    UReplicationGraphNode_AlwaysRelevant_ForConnection();
};

