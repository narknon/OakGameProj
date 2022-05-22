#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIsPlayerExecOutput.h"
#include "UObject/NoExportTypes.h"
#include "EPlayersInVolumeOutput.h"
#include "Engine/LatentActionManager.h"
#include "RelativeDirectionData.h"
#include "Curves/CurveFloat.h"
#include "EIsAutonomousOuput.h"
#include "EPlayersOverlappingActorOutput.h"
#include "GbxGameSystemCoreBlueprintLibrary.generated.h"

class USceneComponent;
class UPrimitiveComponent;
class AActor;
class UGameInstance;
class UObject;
class AVolume;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxGameSystemCoreBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGbxGameSystemCoreBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetComponentPhysicalRotation(UPrimitiveComponent* Target, float PitchRotation, float YawRotation, float RollRotation, FName BoneName);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockTurns(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockTickAndRefreshBones(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockRotation(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockMovement(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockMomentum(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockMantling(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockLookAtTargetLocation(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockLookAt(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockJumping(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockHandIk(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockGod(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockFootIkTracing(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockFootIk(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockDodging(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockDemigod(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockCrouching(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockAIThinking(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceUnlockAiming(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockTurns(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockTickAndRefreshBones(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockTargetable(AActor* Actor, FName Reason, bool bTargetable);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockRotation(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockPhysicsRotation(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockMovement(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockMomentum(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockMantling(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockLookAtTargetLocation(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockLookAt(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockJumping(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockHandIk(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockGod(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockFootIkTracing(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockFootIk(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockDodging(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockDemigod(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockCrouching(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockAIThinking(AActor* Actor, FName Reason, bool bAbort);
    
    UFUNCTION(BlueprintCallable)
    static void ResourceLockAiming(AActor* Actor, FName Reason);
    
    UFUNCTION(BlueprintCallable)
    static bool IsSplitScreen(UGameInstance* GameInstance);
    
    UFUNCTION(BlueprintPure)
    static bool IsPlayer(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool IsContentCensored(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void HoverComponentAtActor(USceneComponent* Component, AActor* TargetActor, float Altitude, float Radius, float AccelerationTime, float Speed, float Duration, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static FVector GetRelativeDirection(const FRelativeDirectionData& RelativeDirectionData, const FVector& DefaultDirection, AActor* SourceActor, const FName& SourceSocketName, AActor* TargetActor);
    
    UFUNCTION(BlueprintPure)
    static float GetCurveFloatValue(const FRuntimeFloatCurve& Curve, float InTime);
    
    UFUNCTION(BlueprintPure)
    static bool GetAreAnyPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintPure)
    static bool GetAreAnyPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static bool GetAreAllPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintPure)
    static bool GetAreAllPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void GetActorListTrimmedToBestCluster(TArray<AActor*>& OutputActors, FVector& ClusterMidpoint, const TArray<AActor*>& InputActors, AActor* SourceActor, float ClusterRadius, bool bPreferClusterContainingCurrentTarget);
    
    UFUNCTION(BlueprintCallable)
    static void BranchOnIsPlayer(AActor* Actor, EIsPlayerExecOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void BranchOnIsAutonomous(AActor* Actor, EIsAutonomousOuput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAnyPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EPlayersOverlappingActorOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAnyPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor, EPlayersOverlappingActorOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAnyPlayersInVolume(UObject* WorldContextObject, const TArray<AVolume*>& Volumes, EPlayersInVolumeOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAllPlayersOverlappingActors(UObject* WorldContextObject, const TArray<AActor*>& Actors, EPlayersOverlappingActorOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAllPlayersOverlappingActor(UObject* WorldContextObject, AActor* Actor, EPlayersOverlappingActorOutput& Branches);
    
    UFUNCTION(BlueprintCallable)
    static void AreAllPlayersInVolume(UObject* WorldContextObject, const TArray<AVolume*>& Volumes, EPlayersInVolumeOutput& Branches);
    
};

