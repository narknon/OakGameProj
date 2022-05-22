#pragma once
#include "CoreMinimal.h"
#include "ReplicationGraphNode_ActorList.h"
#include "OakReplicationGraphNode_AlwaysRelevant.generated.h"

class UReplicationGraphNode_DormancyNode;

UCLASS(NonTransient)
class UOakReplicationGraphNode_AlwaysRelevant : public UReplicationGraphNode_ActorList {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UReplicationGraphNode_DormancyNode* DormancyNode;
    
public:
    UOakReplicationGraphNode_AlwaysRelevant();
};

