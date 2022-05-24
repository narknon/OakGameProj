#pragma once
#include "CoreMinimal.h"
#include "ClothPhysicalMeshData.h"
#include "ClothCollisionData.h"
#include "ClothLODData.generated.h"

USTRUCT(BlueprintType)
struct CLOTHINGSYSTEMRUNTIME_API FClothLODData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FClothPhysicalMeshData PhysicalMeshData;
    
    UPROPERTY(EditAnywhere)
    FClothCollisionData CollisionData;
    
    FClothLODData();
};

