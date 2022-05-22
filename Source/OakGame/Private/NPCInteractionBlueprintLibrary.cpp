#include "NPCInteractionBlueprintLibrary.h"

class AActor;
class UStaticMesh;

void UNPCInteractionBlueprintLibrary::TakeObjectFromPlayerThenGiveBack(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo) {
}

void UNPCInteractionBlueprintLibrary::TakeObjectFromPlayer(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo) {
}

void UNPCInteractionBlueprintLibrary::SetObjectToHold(AActor* TheNPC, UStaticMesh* TheStaticMeshToHold, const FItemPoolInfo& ThePickupToHold, FVector LocationOffset, FRotator RotationOffset, float ScaleOffset, FName HandSocketName, float PutAwayTimeOffset, float TakeOutTimeOffset) {
}

bool UNPCInteractionBlueprintLibrary::NotifyNPCUsedByPlayer(AActor* TheNPC) {
    return false;
}

void UNPCInteractionBlueprintLibrary::GiveObjectToPlayer(AActor* TheNPC, bool bUseAlternateStance, FMissionEventReference MissionEvent, FLatentActionInfo LatentInfo) {
}

UNPCInteractionBlueprintLibrary::UNPCInteractionBlueprintLibrary() {
}

