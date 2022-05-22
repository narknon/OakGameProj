#pragma once
#include "CoreMinimal.h"
#include "AnimMeshList.h"
#include "AttributeInitializationData.h"
#include "WeightedAnim.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FWeightedAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimMeshList Anims;
    
    UPROPERTY(EditAnywhere)
    FAttributeInitializationData Weight;
    
    FWeightedAnim();
};

