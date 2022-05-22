#include "ProjectileBlueprintLibrary.h"

class UObject;
class AActor;
class USceneComponent;

int32 UProjectileBlueprintLibrary::ThrowProjectileAsync(UObject* WorldContext, FThrowProjectileAsyncRequest Request) {
    return 0;
}

void UProjectileBlueprintLibrary::ThrowActorAt(AActor* Actor, FVector TargetLocation, FVector TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset) {
}

void UProjectileBlueprintLibrary::PredictProjectilePathAsync(const UObject* WorldContext, const FPredictProjectilePathAsyncRequest& Request) {
}

FTransform UProjectileBlueprintLibrary::GetSafeProjectileThrowTransform_Component(AActor* SourceActor, USceneComponent* SourceComponent, FName SocketName, const TArray<AActor*>& IgnoreActors, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return FTransform{};
}

FTransform UProjectileBlueprintLibrary::GetSafeProjectileThrowTransform(AActor* SourceActor, FName SocketName, const TArray<AActor*>& IgnoreActors, bool bThrowFromFirstPersonSocket, TEnumAsByte<ECollisionChannel> TraceChannel) {
    return FTransform{};
}

TArray<FTransform> UProjectileBlueprintLibrary::GeneratePointsOnFan(FVector Origin, FVector Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset) {
    return TArray<FTransform>();
}

TArray<FTransform> UProjectileBlueprintLibrary::GeneratePointsOnCone(FVector Origin, FVector Direction, int32 SampleCount, float SpreadAngle, float RotateAngle, float OriginOffset) {
    return TArray<FTransform>();
}

void UProjectileBlueprintLibrary::DetachProjectilesFromActor(AActor* BaseActor) {
}

FVector UProjectileBlueprintLibrary::CalculateConeVector(float Fraction, const FVector& Origin, const FVector& Direction, float AngleWidth, float AngleHeight) {
    return FVector{};
}

void UProjectileBlueprintLibrary::CalcThrowVelocityAtActor(FVector& ResultVelocity, float& ResultGravityScale, FVector StartLocation, AActor* Target, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset) {
}

void UProjectileBlueprintLibrary::CalcThrowVelocity(const UObject* WorldContextObject, FVector& ResultVelocity, float& ResultGravityScale, FVector StartLocation, FVector TargetLocation, FVector TargetVelocity, float MaxPrediction, float Speed, float AnglePercent, FRotator DirectionOffset, FVector LocalTargetOffset) {
}

UProjectileBlueprintLibrary::UProjectileBlueprintLibrary() {
}

