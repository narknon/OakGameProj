#include "ReplicationGraphDebugActor.h"

class AActor;

void AReplicationGraphDebugActor::ServerStopDebugging_Implementation() {
}
bool AReplicationGraphDebugActor::ServerStopDebugging_Validate() {
    return true;
}

void AReplicationGraphDebugActor::ServerStartDebugging_Implementation() {
}
bool AReplicationGraphDebugActor::ServerStartDebugging_Validate() {
    return true;
}

void AReplicationGraphDebugActor::ServerSetCullDistanceForClass_Implementation(UClass* Class, float CullDistance) {
}
bool AReplicationGraphDebugActor::ServerSetCullDistanceForClass_Validate(UClass* Class, float CullDistance) {
    return true;
}

void AReplicationGraphDebugActor::ServerPrintAllActorInfo_Implementation(const FString& str) {
}
bool AReplicationGraphDebugActor::ServerPrintAllActorInfo_Validate(const FString& str) {
    return true;
}

void AReplicationGraphDebugActor::ServerCellInfo_Implementation() {
}
bool AReplicationGraphDebugActor::ServerCellInfo_Validate() {
    return true;
}

void AReplicationGraphDebugActor::ClientCellInfo_Implementation(FVector CellLocation, FVector CellExtent, const TArray<AActor*>& Actors) {
}

AReplicationGraphDebugActor::AReplicationGraphDebugActor() {
    this->ReplicationGraph = NULL;
    this->ConnectionManager = NULL;
}

