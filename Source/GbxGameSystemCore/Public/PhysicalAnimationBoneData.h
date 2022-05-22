#pragma once
#include "CoreMinimal.h"
#include "PhysicalAnimationBoneData.generated.h"

USTRUCT(BlueprintType)
struct FPhysicalAnimationBoneData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName BodyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIncludeChildren;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsLocalSimulation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OrientationStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AngularVelocityStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PositionStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float VelocityStrength;
    
    GBXGAMESYSTEMCORE_API FPhysicalAnimationBoneData();
};

