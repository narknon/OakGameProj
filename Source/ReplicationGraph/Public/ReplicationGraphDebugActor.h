#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "ReplicationGraphDebugActor.generated.h"

class UReplicationGraph;
class UNetReplicationGraphConnection;

UCLASS(NotPlaceable, Transient)
class REPLICATIONGRAPH_API AReplicationGraphDebugActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    UReplicationGraph* ReplicationGraph;
    
    UPROPERTY()
    UNetReplicationGraphConnection* ConnectionManager;
    
    AReplicationGraphDebugActor();
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStopDebugging();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerStartDebugging();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerSetCullDistanceForClass(UClass* Class, float CullDistance);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPrintAllActorInfo(const FString& str);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerCellInfo();
    
    UFUNCTION(Client, Reliable)
    void ClientCellInfo(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors);
    
};

