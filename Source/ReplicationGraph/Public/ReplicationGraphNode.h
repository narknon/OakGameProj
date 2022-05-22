#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ReplicationGraphNode.generated.h"

class UReplicationGraphNode;

UCLASS(Transient)
class REPLICATIONGRAPH_API UReplicationGraphNode : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TArray<UReplicationGraphNode*> AllChildNodes;
    
public:
    UReplicationGraphNode();
};

