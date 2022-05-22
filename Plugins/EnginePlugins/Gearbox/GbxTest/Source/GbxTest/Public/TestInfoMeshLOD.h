#pragma once
#include "CoreMinimal.h"
#include "TestInfoMeshLOD.generated.h"

USTRUCT(BlueprintType)
struct FTestInfoMeshLOD {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    int32 LODIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TriangleCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 VertexCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 TexCoordCount;
    
    UPROPERTY(BlueprintReadOnly)
    int32 SectionCount;
    
    UPROPERTY(BlueprintReadOnly)
    float ScreenSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool bHasDegenerateSections;
    
    GBXTEST_API FTestInfoMeshLOD();
};

