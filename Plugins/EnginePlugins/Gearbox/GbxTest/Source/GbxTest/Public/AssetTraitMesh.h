#pragma once
#include "CoreMinimal.h"
#include "AssetTrait.h"
#include "OptionalInt32.h"
#include "OptionalBool.h"
#include "AssetTraitMesh.generated.h"

UCLASS()
class UAssetTraitMesh : public UAssetTrait {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 LODMinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 LODMaxCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxTriangleCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxVertexCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinTexCoordCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxTexCoordCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinSectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxSectionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MinSocketCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalInt32 MaxSocketCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FOptionalBool HasSockets;
    
    UAssetTraitMesh();
};

