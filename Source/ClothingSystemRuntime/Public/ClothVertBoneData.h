#pragma once
#include "CoreMinimal.h"
#include "ClothVertBoneData.generated.h"

USTRUCT(BlueprintType)
struct FClothVertBoneData {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 NumInfluences;
    
    UPROPERTY()
    uint16 BoneIndices[8];
    
    UPROPERTY()
    float BoneWeights[8];
    
    CLOTHINGSYSTEMRUNTIME_API FClothVertBoneData();
};

