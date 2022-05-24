#pragma once
#include "CoreMinimal.h"
#include "MaskTarget_PhysMesh.h"
#include "ClothParameterMask_PhysMesh.generated.h"

USTRUCT()
struct CLOTHINGSYSTEMRUNTIME_API FClothParameterMask_PhysMesh {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MaskName;
    
    UPROPERTY()
    MaskTarget_PhysMesh CurrentTarget;
    
    UPROPERTY()
    float MaxValue;
    
    UPROPERTY()
    float MinValue;
    
    UPROPERTY()
    TArray<float> Values;
    
    UPROPERTY()
    bool bEnabled;
    
    FClothParameterMask_PhysMesh();
};

