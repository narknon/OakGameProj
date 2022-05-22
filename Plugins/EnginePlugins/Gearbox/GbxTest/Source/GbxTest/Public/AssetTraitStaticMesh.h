#pragma once
#include "CoreMinimal.h"
#include "AssetTraitMesh.h"
#include "OptionalInt32.h"
#include "OptionalLODGroup.h"
#include "OptionalBool.h"
#include "AssetTraitStaticMesh.generated.h"

UCLASS()
class UAssetTraitStaticMesh : public UAssetTraitMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinPrimitiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxPrimitiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinLightMapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxLightMapIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalLODGroup LODGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool CastShadow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool EnableCollision;
    
    UAssetTraitStaticMesh();
};

