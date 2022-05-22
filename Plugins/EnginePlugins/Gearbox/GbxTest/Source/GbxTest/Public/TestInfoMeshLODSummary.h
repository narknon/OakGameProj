#pragma once
#include "CoreMinimal.h"
#include "TestInfoMeshLODSummary.generated.h"

USTRUCT(BlueprintType)
struct FTestInfoMeshLODSummary {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 LODCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMaxTriangleCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMaxVertexCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMinTexCoordCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMaxTexCoordCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMinSectionCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 LODMaxSectionCount;
    
    UPROPERTY(BlueprintReadOnly)
    float LODMinScreenSize;
    
    UPROPERTY(BlueprintReadOnly)
    float LODMaxScreenSize;
    
    GBXTEST_API FTestInfoMeshLODSummary();
};

