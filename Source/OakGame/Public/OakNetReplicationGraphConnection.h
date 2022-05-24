#pragma once
#include "CoreMinimal.h"
#include "NetReplicationGraphConnection.h"
#include "OakNetReplicationGraphConnection.generated.h"

class AActor;
class UReplicationGraphNode_GridSpatialization2D;
class UOakReplicationGraphNode_AlwaysRelevant_ForConnection;

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

