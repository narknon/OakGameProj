#include "HitResultFunctionLibrary.h"

class UPhysicalMaterial;
class UPrimitiveComponent;
class AActor;

bool UHitResultFunctionLibrary::IsBlockingHit(FHitResult HitResult) {
    return false;
}

UPhysicalMaterial* UHitResultFunctionLibrary::GetPhysMaterial(FHitResult HitResult) {
    return NULL;
}

FVector UHitResultFunctionLibrary::GetHitNormal(FHitResult HitResult) {
    return FVector{};
}

FVector UHitResultFunctionLibrary::GetHitLocation(FHitResult HitResult) {
    return FVector{};
}

float UHitResultFunctionLibrary::GetHitDistance(FHitResult HitResult) {
    return 0.0f;
}

UPrimitiveComponent* UHitResultFunctionLibrary::GetHitComponent(FHitResult HitResult) {
    return NULL;
}

AActor* UHitResultFunctionLibrary::GetHitActor(FHitResult HitResult) {
    return NULL;
}

FName UHitResultFunctionLibrary::GetBoneName(FHitResult HitResult) {
    return NAME_None;
}

UHitResultFunctionLibrary::UHitResultFunctionLibrary() {
}

