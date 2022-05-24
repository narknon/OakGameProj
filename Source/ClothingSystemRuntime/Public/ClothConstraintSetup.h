#pragma once
#include "CoreMinimal.h"
#include "ClothConstraintSetup.generated.h"

USTRUCT(BlueprintType)
struct FClothConstraintSetup {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Stiffness;
    
    UPROPERTY(EditAnywhere)
    float StiffnessMultiplier;
    
    UPROPERTY(EditAnywhere)
    float StretchLimit;
    
    UPROPERTY(EditAnywhere)
    float CompressionLimit;
    
    CLOTHINGSYSTEMRUNTIME_API FClothConstraintSetup();
};

