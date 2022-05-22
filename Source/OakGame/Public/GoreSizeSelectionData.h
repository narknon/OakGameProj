#pragma once
#include "CoreMinimal.h"
#include "ForceSelection.h"
#include "GoreSizeSelectionData.generated.h"

class UParticleSystem;
class UStaticMesh;
class UWwiseEvent;
class UMaterialInstanceConstant;
class UObject;

USTRUCT(BlueprintType)
struct FGoreSizeSelectionData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bSpecifiedMinScale: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bSpecifiedMaxScale: 1;
    
    UPROPERTY(EditAnywhere)
    float MinScale;
    
    UPROPERTY(EditAnywhere)
    float MaxScale;
    
    UPROPERTY(EditAnywhere)
    TArray<UStaticMesh*> StumpMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> StumpParticles;
    
    UPROPERTY(EditAnywhere)
    TArray<UMaterialInstanceConstant*> StumpDecals;
    
    UPROPERTY(EditAnywhere)
    UWwiseEvent* StumpSound;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* StumpMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    TArray<UObject*> LimbMeshes;
    
    UPROPERTY(EditAnywhere)
    TArray<UParticleSystem*> LimbParticles;
    
    UPROPERTY(EditAnywhere)
    UMaterialInstanceConstant* LimbMaterialOverride;
    
    UPROPERTY(EditAnywhere)
    FForceSelection LimbForce;
    
    UPROPERTY(EditAnywhere)
    bool bScaleLimbToStump;
    
    UPROPERTY(EditAnywhere)
    float LimbScale;
    
    OAKGAME_API FGoreSizeSelectionData();
};

