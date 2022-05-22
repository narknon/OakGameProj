#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CoverLineOfSightParams.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverLineOfSightParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 NumVerticalSections;
    
    UPROPERTY(EditAnywhere)
    int32 NumHorizontalSections;
    
    UPROPERTY(EditAnywhere)
    float VerticalAngleUp;
    
    UPROPERTY(EditAnywhere)
    float VerticalAngleDown;
    
    UPROPERTY(EditAnywhere)
    float HorizontalAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxDistance;
    
    UPROPERTY(EditAnywhere)
    int32 NumBlockSubdivisions;
    
    UPROPERTY(EditAnywhere)
    FRotator RotationOffset;
    
    FCoverLineOfSightParams();
};

