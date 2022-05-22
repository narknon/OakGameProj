#include "AITargetingBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class AActor;
class UAISense;

bool UAITargetingBlueprintLibrary::IsThreatenedByInfo(AActor* AIActor, const FTargetActorInfo& TargetInfo) {
    return false;
}

bool UAITargetingBlueprintLibrary::IsThreatenedBy(AActor* AIActor, AActor* Target) {
    return false;
}

float UAITargetingBlueprintLibrary::GetTargetSenseAge(const FTargetActorInfo& TargetInfo, TSubclassOf<UAISense> Sense) {
    return 0.0f;
}

int32 UAITargetingBlueprintLibrary::GetNumTargetsInRange(AActor* AIActor, float Radius) {
    return 0;
}

FVector UAITargetingBlueprintLibrary::GetBestKnownLocation(AActor* AIActor, AActor* TargetActor, FName Socket) {
    return FVector{};
}

bool UAITargetingBlueprintLibrary::CalcTargetGroupLocation(AActor* AIActor, float GroupDistance, FVector& Result) {
    return false;
}

void UAITargetingBlueprintLibrary::ApplyTargetScoringBoost(AActor* TargetActor, FName BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds) {
}

void UAITargetingBlueprintLibrary::AISetTargetInBlackboard(AActor* AIActor, const FGbxBlackboardKeySelector& Key, int32 TargetIndex) {
}

void UAITargetingBlueprintLibrary::AISetScriptedTarget(AActor* AIActor, AActor* TargetActor) {
}

void UAITargetingBlueprintLibrary::AISendCommunication(AActor* AIActor, float Radius) {
}

void UAITargetingBlueprintLibrary::AIProvokeSpecificSense(AActor* AITarget, AActor* Source, TSubclassOf<UAISense> SenseType, FVector StimulusLocation) {
}

void UAITargetingBlueprintLibrary::AIProvoke(AActor* AITarget, AActor* Source) {
}

void UAITargetingBlueprintLibrary::AIPlayerProvoke(AActor* AITarget) {
}

AActor* UAITargetingBlueprintLibrary::AIGetScriptedTarget(AActor* AIActor) {
    return NULL;
}

bool UAITargetingBlueprintLibrary::AICanCommunicate(AActor* AIActor, float Radius, float MinSenseAgeDelta) {
    return false;
}

UAITargetingBlueprintLibrary::UAITargetingBlueprintLibrary() {
}

