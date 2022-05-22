#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "PhysicalAnimationBoneData.h"
#include "EPhysicalAnimationBlendToKinematicMode.h"
#include "PhysicalAnimationProfileAsset.generated.h"

UCLASS(BlueprintType, MinimalAPI)
class UPhysicalAnimationProfileAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FPhysicalAnimationBoneData> BoneData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EPhysicalAnimationBlendToKinematicMode DynamicToKinematicBlendMode;
    
    UPhysicalAnimationProfileAsset();
};

