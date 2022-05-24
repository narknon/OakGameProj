#pragma once
#include "CoreMinimal.h"
#include "ClothingAssetBase.h"
#include "ClothConfig.h"
#include "ClothLODData.h"
#include "ClothingAsset.generated.h"

class UPhysicsAsset;
class UClothingAssetCustomData;

UCLASS()
class CLOTHINGSYSTEMRUNTIME_API UClothingAsset : public UClothingAssetBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(EditAnywhere)
    FClothConfig ClothConfig;
    
    UPROPERTY()
    TArray<FClothLODData> LODData;
    
    UPROPERTY()
    TArray<int32> LodMap;
    
    UPROPERTY()
    TArray<FName> UsedBoneNames;
    
    UPROPERTY()
    TArray<int32> UsedBoneIndices;
    
    UPROPERTY()
    int32 ReferenceBoneIndex;
    
    UPROPERTY()
    UClothingAssetCustomData* CustomData;
    
    UClothingAsset();
};

