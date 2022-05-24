#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ThrowProjectileAsyncRequest.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "PredictProjectilePathAsyncRequest.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ProjectileBlueprintLibrary.generated.h"

class UObject;
class AActor;
class USceneComponent;

UCLASS(BlueprintType)
class GBXWEAPON_API UProjectileBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UProjectileBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static int32 ThrowProjectileAsync(UObject* WorldContext, FThrowProjectileAsyncRequest Request);
    
    UFUNCTION(BlueprintCallable)
    static void ThrowActorAt(AActor* Actor, FVector TargetLocation, FVector TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset);
    
    UFUNCTION(BlueprintCallable)
    static void PredictProjectilePathAsync(const UObject* WorldContext, const FPredictProjectilePathAsyncRequest& Request);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetSafeProjectileThrowTransform_Component(AActor* SourceActor, USceneComponent* SourceComponent, FName SocketName, const TArray<AActor*>& IgnoreActors, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintPure)
    static FTransform GetSafeProjectileThrowTransform(AActor* SourceActor, FName SocketName, const TArray<AActor*>& IgnoreActors, bool bThrowFromFirstPersonSocket, TEnumAsByte<ECollisionChannel> TraceChannel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<FTransform> GeneratePointsOnFan(FVector Origin, FVector Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static TArray<FTransform> GeneratePointsOnCone(FVector Origin, FVector Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset);
    
    UFUNCTION(BlueprintCallable)
    static void DetachProjectilesFromActor(AActor* BaseActor);
    
    UFUNCTION(BlueprintPure)
    static FVector CalculateConeVector(float Fraction, const FVector& Origin, const FVector& Direction, float AngleWidth, float AngleHeight);
    
    UFUNCTION(BlueprintCallable)
    static void CalcThrowVelocityAtActor(FVector& ResultVelocity, float& ResultGravityScale, FVector StartLocation, AActor* Target, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset);
    
    UFUNCTION(BlueprintCallable)
    static void CalcThrowVelocity(const UObject* WorldContextObject, FVector& ResultVelocity, float& ResultGravityScale, FVector StartLocation, FVector TargetLocation, FVector TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset);
    
};

