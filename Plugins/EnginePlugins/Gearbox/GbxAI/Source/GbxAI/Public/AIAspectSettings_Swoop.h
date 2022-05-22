#pragma once
#include "CoreMinimal.h"
#include "GbxBlackboardKeySelector.h"
#include "GbxParam.h"
#include "AIAspectSettings_Swoop.generated.h"

USTRUCT(BlueprintType)
struct FAIAspectSettings_Swoop {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FGbxBlackboardKeySelector CenterKey;
    
    UPROPERTY(EditAnywhere)
    FGbxParam FarDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam FarHeight;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NearDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam NearHeight;
    
    UPROPERTY(EditAnywhere)
    FGbxParam PassDistance;
    
    UPROPERTY(EditAnywhere)
    FGbxParam PassHeight;
    
    UPROPERTY(EditAnywhere)
    float SearchRadius;
    
    UPROPERTY(EditAnywhere)
    bool bLimitSearchRadius;
    
    UPROPERTY(EditAnywhere)
    float UpdatePeriod;
    
    GBXAI_API FAIAspectSettings_Swoop();
};

