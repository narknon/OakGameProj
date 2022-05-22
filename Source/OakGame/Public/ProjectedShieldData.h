#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "WwiseLocationOverride.h"
#include "HealthType.h"
#include "UObject/NoExportTypes.h"
#include "ProjectedShieldData.generated.h"

class UMaterialInterface;
class UParticleSystem;
class UStaticMesh;
class UWwiseEvent;

UCLASS()
class UProjectedShieldData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(EditAnywhere)
    FName SocketName;
    
    UPROPERTY(EditAnywhere)
    FTransform MeshOffset;
    
    UPROPERTY(EditAnywhere)
    FName AudioSocketName;
    
    UPROPERTY(EditAnywhere)
    TArray<FWwiseLocationOverride> AudioLocations;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StartShieldWiseEvent;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StopShieldWiseEvent;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* Particle;
    
    UPROPERTY(EditAnywhere)
    FTransform ParticleOffset;
    
    UPROPERTY(EditAnywhere)
    FHealthType ShieldHealth;
    
    UPROPERTY(EditAnywhere)
    bool AttachOnSpawn;
    
    UProjectedShieldData();
};

