#pragma once
#include "CoreMinimal.h"
#include "TestInfoStaticMesh.generated.h"

class UAssetTraitStaticMesh;

USTRUCT(BlueprintType)
struct FTestInfoStaticMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TArray<UAssetTraitStaticMesh*> AssetTraits;
    
    UPROPERTY(BlueprintReadOnly)
    int32 PrimitiveCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LightMapIndex;
    
    UPROPERTY(BlueprintReadOnly)
    FName LODGroupName;
    
    UPROPERTY(BlueprintReadOnly)
    bool CastShadow;
    
    UPROPERTY(BlueprintReadOnly)
    bool EnableCollision;
    
    GBXTEST_API FTestInfoStaticMesh();
};

