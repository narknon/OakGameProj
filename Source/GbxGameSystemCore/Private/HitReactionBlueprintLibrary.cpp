#include "HitReactionBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UHitReactionLayer;
class AActor;
class UHitReactionData;
class UHitReactionTag;
class UObject;
class UGbxAction;

void UHitReactionBlueprintLibrary::SetHitReactionData(AActor* Actor, UHitReactionData* HitReactionData) {
}

void UHitReactionBlueprintLibrary::ScriptHitReaction(AActor* Actor, AActor* Causer, UHitReactionTag* Tag, FVector LocalHitDirection, FName BoneName, FForceSelection Force) {
}

void UHitReactionBlueprintLibrary::ScriptDeath(AActor* Actor, AActor* Causer, UHitReactionTag* Tag, FVector LocalHitDirection, FName BoneName, FForceSelection Force) {
}

void UHitReactionBlueprintLibrary::ResourceUnlockHitReactions(AActor* Actor, FName Reason) {
}

void UHitReactionBlueprintLibrary::ResourceLockHitReactions(AActor* Actor, FName Reason) {
}

void UHitReactionBlueprintLibrary::RemoveHitReactionLiveLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer) {
}

void UHitReactionBlueprintLibrary::RemoveHitReactionDeathLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer) {
}

FVector UHitReactionBlueprintLibrary::K2_GetHitLocationFromAction(UGbxAction* Action) {
    return FVector{};
}

FVector UHitReactionBlueprintLibrary::K2_GetHitDirectionFromAction(UGbxAction* Action, bool bLocalSpace) {
    return FVector{};
}

UObject* UHitReactionBlueprintLibrary::K2_GetHitCauserFromAction(UGbxAction* Action) {
    return NULL;
}

float UHitReactionBlueprintLibrary::K2_GetHealthPercentFromAction(UGbxAction* Action) {
    return 0.0f;
}

float UHitReactionBlueprintLibrary::K2_GetForceFromAction(UGbxAction* Action) {
    return 0.0f;
}

int32 UHitReactionBlueprintLibrary::K2_GetBoneIndexFromAction(UGbxAction* Action) {
    return 0;
}

bool UHitReactionBlueprintLibrary::IsHitReactionTagActive(AActor* Actor, UHitReactionTag* Tag) {
    return false;
}

void UHitReactionBlueprintLibrary::AddHitReactionLiveLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer) {
}

void UHitReactionBlueprintLibrary::AddHitReactionDeathLayer(AActor* Actor, TSubclassOf<UHitReactionLayer> Layer) {
}

UHitReactionBlueprintLibrary::UHitReactionBlueprintLibrary() {
}

