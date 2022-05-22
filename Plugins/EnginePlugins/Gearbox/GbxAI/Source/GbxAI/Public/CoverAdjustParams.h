#pragma once
#include "CoreMinimal.h"
#include "CoverAdjustParams.generated.h"

USTRUCT(BlueprintType)
struct GBXAI_API FCoverAdjustParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float AdjustDistanceDown;
    
    UPROPERTY(EditAnywhere)
    bool bDoDownAdjustment;
    
    UPROPERTY(EditAnywhere)
    float AdjustDistanceUp;
    
    UPROPERTY(EditAnywhere)
    bool bDoUpAdjustment;
    
    UPROPERTY(EditAnywhere)
    float AdjustDistanceForward;
    
    UPROPERTY(EditAnywhere)
    bool bDoForwardAdjustment;
    
    UPROPERTY(EditAnywhere)
    bool bEdgeTestLeft;
    
    UPROPERTY(EditAnywhere)
    bool bEdgeTestRight;
    
    UPROPERTY(EditAnywhere)
    int32 EdgeTestSections;
    
    UPROPERTY(EditAnywhere)
    float EdgeTestHeightPct;
    
    UPROPERTY(EditAnywhere)
    float EdgeTestDistancePct;
    
    UPROPERTY(EditAnywhere)
    float EdgeTestWalkBackDistance;
    
    UPROPERTY(EditAnywhere)
    int32 EdgeTestAngleThreshold;
    
    UPROPERTY(EditAnywhere)
    float BlockTestHitPct;
    
    UPROPERTY(EditAnywhere)
    float BlockTestDistancePct;
    
    UPROPERTY(EditAnywhere)
    int32 BlockTestHorizontalSections;
    
    UPROPERTY(EditAnywhere)
    int32 BlockTestVerticalSections;
    
    UPROPERTY(EditAnywhere)
    int32 BlockTestAngleThreshold;
    
    FCoverAdjustParams();
};

