#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestInfoMeshLOD.h"
#include "TestInfoTexture.h"
#include "TestInfoMeshLODSummary.h"
#include "TestInfoMesh.h"
#include "TestInfoStaticMesh.h"
#include "TestInfoSkeletalMesh.h"
#include "TestInfoParticleSystem.h"
#include "TestInfoParticleEmitter.h"
#include "TestInfoMaterial.h"
#include "TestLibraryContent.generated.h"

class UTexture;
class UStaticMesh;
class UMaterial;
class UParticleSystem;
class USkeletalMesh;
class UObject;

UCLASS(BlueprintType)
class UTestLibraryContent : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UTestLibraryContent();
    UFUNCTION(BlueprintPure)
    static UTexture* LoadAssetTexture(const FString& ObjectPath);
    
    UFUNCTION(BlueprintPure)
    static UStaticMesh* LoadAssetStaticMesh(const FString& ObjectPath);
    
    UFUNCTION(BlueprintPure)
    static USkeletalMesh* LoadAssetSkeletalMesh(const FString& ObjectPath);
    
    UFUNCTION(BlueprintPure)
    static UParticleSystem* LoadAssetParticleSystem(const FString& ObjectPath);
    
    UFUNCTION(BlueprintPure)
    static UMaterial* LoadAssetMaterial(const FString& ObjectPath);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoTexture(const UTexture* Asset, FTestInfoTexture& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoStaticMeshLOD(const UStaticMesh* Asset, const int32 LODIndex, FTestInfoMeshLOD& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoStaticMesh(const UStaticMesh* Asset, FTestInfoMeshLODSummary& LODSummary, FTestInfoMesh& Mesh, FTestInfoStaticMesh& StaticMesh);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoSkeletalMeshLOD(const USkeletalMesh* Asset, const int32 LODIndex, FTestInfoMeshLOD& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoSkeletalMesh(const USkeletalMesh* Asset, FTestInfoMeshLODSummary& LODSummary, FTestInfoMesh& Mesh, FTestInfoSkeletalMesh& SkeletalMesh);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoParticleSystem(const UParticleSystem* Asset, FTestInfoParticleSystem& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoParticleEmitter(const UParticleSystem* Asset, const int32 EmitterIndex, FTestInfoParticleEmitter& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetTestInfoMaterial(const UMaterial* Asset, FTestInfoMaterial& Info);
    
    UFUNCTION(BlueprintPure)
    static void GetAllPersistentGameMaps(TArray<FString>& OutMapNames, bool ShortNamesOnly);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> ContentAuditSingleObject(UObject* Asset);
    
};

