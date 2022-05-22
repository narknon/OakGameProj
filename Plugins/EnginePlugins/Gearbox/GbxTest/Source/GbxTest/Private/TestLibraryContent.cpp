#include "TestLibraryContent.h"

class UTexture;
class UStaticMesh;
class UMaterial;
class UParticleSystem;
class USkeletalMesh;
class UObject;

UTexture* UTestLibraryContent::LoadAssetTexture(const FString& ObjectPath) {
    return NULL;
}

UStaticMesh* UTestLibraryContent::LoadAssetStaticMesh(const FString& ObjectPath) {
    return NULL;
}

USkeletalMesh* UTestLibraryContent::LoadAssetSkeletalMesh(const FString& ObjectPath) {
    return NULL;
}

UParticleSystem* UTestLibraryContent::LoadAssetParticleSystem(const FString& ObjectPath) {
    return NULL;
}

UMaterial* UTestLibraryContent::LoadAssetMaterial(const FString& ObjectPath) {
    return NULL;
}

void UTestLibraryContent::GetTestInfoTexture(const UTexture* Asset, FTestInfoTexture& Info) {
}

void UTestLibraryContent::GetTestInfoStaticMeshLOD(const UStaticMesh* Asset, const int32 LODIndex, FTestInfoMeshLOD& Info) {
}

void UTestLibraryContent::GetTestInfoStaticMesh(const UStaticMesh* Asset, FTestInfoMeshLODSummary& LODSummary, FTestInfoMesh& Mesh, FTestInfoStaticMesh& StaticMesh) {
}

void UTestLibraryContent::GetTestInfoSkeletalMeshLOD(const USkeletalMesh* Asset, const int32 LODIndex, FTestInfoMeshLOD& Info) {
}

void UTestLibraryContent::GetTestInfoSkeletalMesh(const USkeletalMesh* Asset, FTestInfoMeshLODSummary& LODSummary, FTestInfoMesh& Mesh, FTestInfoSkeletalMesh& SkeletalMesh) {
}

void UTestLibraryContent::GetTestInfoParticleSystem(const UParticleSystem* Asset, FTestInfoParticleSystem& Info) {
}

void UTestLibraryContent::GetTestInfoParticleEmitter(const UParticleSystem* Asset, const int32 EmitterIndex, FTestInfoParticleEmitter& Info) {
}

void UTestLibraryContent::GetTestInfoMaterial(const UMaterial* Asset, FTestInfoMaterial& Info) {
}

void UTestLibraryContent::GetAllPersistentGameMaps(TArray<FString>& OutMapNames, bool ShortNamesOnly) {
}

TArray<FString> UTestLibraryContent::ContentAuditSingleObject(UObject* Asset) {
    return TArray<FString>();
}

UTestLibraryContent::UTestLibraryContent() {
}

