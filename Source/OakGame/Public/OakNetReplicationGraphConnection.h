#pragma once
#include "CoreMinimal.h"
#include "NetReplicationGraphConnection.h"
#include "OakNetReplicationGraphConnection.generated.h"

class UOakReplicationGraphNode_AlwaysRelevant_ForConnection;
class UReplicationGraphNode_GridSpatialization2D;
class AActor;

UCLASS(NonTransient)
class UOakNetReplicationGraphConnection : public UNetReplicationGraphConnection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UReplicationGraphNode_GridSpatialization2D* GridNode;
    
    UPROPERTY()
    UOakReplicationGraphNode_AlwaysRelevant_ForConnection* AlwaysRelevantNode;
    
    UPROPERTY()
    TArray<AActor*> OnlyRelevantToConnectionActors;
    
public:
    UOakNetReplicationGraphConnection();
};

