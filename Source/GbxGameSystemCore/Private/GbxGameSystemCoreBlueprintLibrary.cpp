#include "GbxGameSystemCoreBlueprintLibrary.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;
class UGameInstance;
class UObject;
class AVolume;

void UGbxGameSystemCoreBlueprintLibrary::SetComponentPhysicalRotation(UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, FName BoneName) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockTurns(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockTickAndRefreshBones(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockRotation(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockMovement(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockMomentum(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockMantling(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockLookAtTargetLocation(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockLookAt(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockJumping(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockHandIk(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockGod(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockFootIkTracing(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockFootIk(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockDodging(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockDemigod(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockCrouching(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockAIThinking(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceUnlockAiming(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockTurns(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockTickAndRefreshBones(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockTargetable(AActor* Actor, FName Reason, bool bTargetable) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockRotation(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockPhysicsRotation(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockMovement(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockMomentum(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockMantling(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockLookAtTargetLocation(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockLookAt(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockJumping(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockHandIk(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockGod(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockFootIkTracing(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockFootIk(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockDodging(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockDemigod(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockCrouching(AActor* Actor, FName Reason) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockAIThinking(AActor* Actor, FName Reason, bool bAbort) {
}

void UGbxGameSystemCoreBlueprintLibrary::ResourceLockAiming(AActor* Actor, FName Reason) {
}

bool UGbxGameSystemCoreBlueprintLibrary::IsSplitScreen(UGameInstance* GameInstance) {
    return false;
}

bool UGbxGameSystemCoreBlueprintLibrary::IsPlayer(AActor* Actor) {
    return false;
}

bool UGbxGameSystemCoreBlueprintLibrary::IsContentCensored(UObject* WorldContextObject) {
    return false;
}

void UGbxGameSystemCoreBlueprintLibrary::HoverComponentAtActor(USceneComponent* Component, AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, FLatentActionInfo LatentInfo) {
}

FVector UGbxGameSystemCoreBlueprintLibrary::GetRelativeDirection(const FRelativeDirectionData& RelativeDirectionData, const FVector& DefaultDirection, AActor* SourceActor, const FName& SourceSocketName, AActor* TargetActor) {
    return FVector{};
}

float UGbxGameSystemCoreBlueprintLibrary::GetCurveFloatValue(const FRuntimeFloatCurve& Curve, float InTime) {
    return 0.0f;
}

bool UGbxGameSystemCoreBlueprintLibrary::GetAreAnyPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors) {
    return false;
}

bool UGbxGameSystemCoreBlueprintLibrary::GetAreAnyPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor) {
    return false;
}

bool UGbxGameSystemCoreBlueprintLibrary::GetAreAllPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors) {
    return false;
}

bool UGbxGameSystemCoreBlueprintLibrary::GetAreAllPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor) {
    return false;
}

void UGbxGameSystemCoreBlueprintLibrary::GetActorListTrimmedToBestCluster(TArray<AActor*>& OutputActors, FVector& ClusterMidpoint, const TArray<AActor*>& InputActors, AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget) {
}

void UGbxGameSystemCoreBlueprintLibrary::BranchOnIsPlayer(AActor* Actor, EIsPlayerExecOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::BranchOnIsAutonomous(AActor* Actor, EIsAutonomousOuput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAnyPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EPlayersOverlappingActorOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAnyPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor, EPlayersOverlappingActorOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAnyPlayersInVolume(UObject* WorldContextObject, const TArray<AVolume*>& Volumes, EPlayersInVolumeOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAllPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EPlayersOverlappingActorOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAllPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor, EPlayersOverlappingActorOutput& Branches) {
}

void UGbxGameSystemCoreBlueprintLibrary::AreAllPlayersInVolume(UObject* WorldContextObject, const TArray<AVolume*>& Volumes, EPlayersInVolumeOutput& Branches) {
}

UGbxGameSystemCoreBlueprintLibrary::UGbxGameSystemCoreBlueprintLibrary() {
}

