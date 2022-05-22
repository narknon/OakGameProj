#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClothVertBoneData.h"
#include "ClothPhysicalMeshData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIME_API FClothPhysicalMeshData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FVector> Vertices;
    
    UPROPERTY(EditAnywhere)
    TArray<FVector> Normals;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> Indices;
    
    UPROPERTY(EditAnywhere)
    TArray<float> MaxDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopDistances;
    
    UPROPERTY(EditAnywhere)
    TArray<float> BackstopRadiuses;
    
    UPROPERTY(EditAnywhere)
    TArray<float> AnimDriveMultipliers;
    
    UPROPERTY(EditAnywhere)
    TArray<float> InverseMasses;
    
    UPROPERTY(EditAnywhere)
    TArray<FClothVertBoneData> BoneData;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBoneWeights;
    
    UPROPERTY(EditAnywhere)
    int32 NumFixedVerts;
    
    UPROPERTY(EditAnywhere)
    TArray<uint32> SelfCollisionIndices;
    
    FClothPhysicalMeshData();
};

