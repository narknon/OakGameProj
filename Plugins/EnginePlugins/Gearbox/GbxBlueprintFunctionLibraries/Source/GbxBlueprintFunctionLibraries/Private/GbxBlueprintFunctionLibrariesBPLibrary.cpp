#include "GbxBlueprintFunctionLibrariesBPLibrary.h"

class AActor;
class ACharacter;
class UObject;
class UMaterialInterface;

void UGbxBlueprintFunctionLibrariesBPLibrary::SortActorListByDistance(AActor* TargetActor, TArray<AActor*>& ActorList) {
}

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise4D(const FVector4& Location) {
    return 0.0f;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise3D(const FVector& Location) {
    return 0.0f;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise2D(const FVector2D& Location) {
    return 0.0f;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::SimplexNoise1D(float Location) {
    return 0.0f;
}

void UGbxBlueprintFunctionLibrariesBPLibrary::SetForceMipLevelsToBeResidentForMaterialArray(const TArray<UMaterialInterface*>& MaterialArray, bool OverrideForceMiplevelsToBeResident, bool bForceMiplevelsToBeResidentValue, float ForceDuration, int32 CinematicTextureGroups) {
}

float UGbxBlueprintFunctionLibrariesBPLibrary::PerlinNoise2D(FVector2D Location, int32 Octaves, float Persistence, float Amplitude) {
    return 0.0f;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::PerlinNoise1D(float X, int32 Octaves, float Persistence, float Amplitude) {
    return 0.0f;
}

bool UGbxBlueprintFunctionLibrariesBPLibrary::IsWithinRangeAndAngle(const FTransform& Source, AActor* Target, float Range, float Angle) {
    return false;
}

bool UGbxBlueprintFunctionLibrariesBPLibrary::IsInEditorMode() {
    return false;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::GbxBlueprintFunctionLibrariesSampleFunction(float Param) {
    return 0.0f;
}

float UGbxBlueprintFunctionLibrariesBPLibrary::FloatDamp(float Current, float Target, float& CurrentVelocity, float SmoothDuration, float MaxSpeed, float DeltaTime) {
    return 0.0f;
}

ACharacter* UGbxBlueprintFunctionLibrariesBPLibrary::FindClosestPlayerCharacter(UObject* WorldContextObject, const FVector& RefLocation) {
    return NULL;
}

void UGbxBlueprintFunctionLibrariesBPLibrary::FindClosestActor(const TArray<int32>& ActorArray, const FVector& RefLocation, int32& ClosestActor) {
}

UObject* UGbxBlueprintFunctionLibrariesBPLibrary::EditorLoadAsset(const TSoftObjectPtr<UObject>& Asset) {
    return NULL;
}

void UGbxBlueprintFunctionLibrariesBPLibrary::BroadcastRemoteEvent(UObject* WorldContextObject, FName EventName) {
}

UGbxBlueprintFunctionLibrariesBPLibrary::UGbxBlueprintFunctionLibrariesBPLibrary() {
}

