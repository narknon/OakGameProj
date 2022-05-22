#include "GbxNavBlueprintLibrary.h"

class AActor;
class UGbxNavMeshLayer;
class UObject;

void UGbxNavBlueprintLibrary::SetAINavPathType(AActor* Actor, EGbxPathType PathType) {
}

void UGbxNavBlueprintLibrary::ResourceUnlockAvoidance(AActor* Actor, FName Reason) {
}

void UGbxNavBlueprintLibrary::ResourceLockAvoidance(AActor* Actor, FName Reason) {
}

void UGbxNavBlueprintLibrary::ForceNavMeshLayer(AActor* Actor, UGbxNavMeshLayer* ForcedNavMeshLayer) {
}

bool UGbxNavBlueprintLibrary::FindNavMeshPointForActor(AActor* Actor, const FVector& Point, float Radius, FVector& Result) {
    return false;
}

bool UGbxNavBlueprintLibrary::FindNavMeshPoint(UObject* WorldContextObject, const FVector& Point, float Radius, FVector& Result, UGbxNavMeshLayer* Layer) {
    return false;
}

UGbxNavBlueprintLibrary::UGbxNavBlueprintLibrary() {
}

