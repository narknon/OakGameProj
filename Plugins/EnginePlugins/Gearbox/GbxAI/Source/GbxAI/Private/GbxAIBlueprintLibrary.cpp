#include "GbxAIBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UBlackboardComponent;
class AActor;
class UHavokPathFindingData;
class UGbxNavAreaData;
class UAIAction;
class UBTNode;

void UGbxAIBlueprintLibrary::SetPerceivableToAllAI(AActor* Actor, bool bPerceivable) {
}

void UGbxAIBlueprintLibrary::SetAIPathFindingData(AActor* InActor, UHavokPathFindingData* PathFindingData) {
}

void UGbxAIBlueprintLibrary::SetAINavAreaData(AActor* InActor, UGbxNavAreaData* NavAreaData) {
}

void UGbxAIBlueprintLibrary::ResetTeamForAllAIChildren(AActor* Actor) {
}

bool UGbxAIBlueprintLibrary::IsActorThreatened(AActor* InActor) {
    return false;
}

bool UGbxAIBlueprintLibrary::GetValueAsActorAndLocation(UBlackboardComponent* Blackboard, const FBlackboardKeySelector& Key, AActor*& Actor, FVector& Location) {
    return false;
}

bool UGbxAIBlueprintLibrary::GetBlackboardValueAsActorAndLocation(UBTNode* BTNode, const FBlackboardKeySelector& Key, AActor*& Actor, FVector& Location) {
    return false;
}

void UGbxAIBlueprintLibrary::AIScriptedUseWeapon(AActor* Actor, bool bUseWeapon) {
}

void UGbxAIBlueprintLibrary::AIScriptedAction(AActor* Actor, TSubclassOf<UAIAction> Action) {
}

bool UGbxAIBlueprintLibrary::AIIsWithinTerritory(AActor* AIActor, ETerritoryType Zone) {
    return false;
}

UGbxAIBlueprintLibrary::UGbxAIBlueprintLibrary() {
}

