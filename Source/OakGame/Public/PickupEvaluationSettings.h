#pragma once
#include "CoreMinimal.h"
#include "PickupEvaluationSettings.generated.h"

USTRUCT(BlueprintType)
struct FPickupEvaluationSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinEvaluationHeight;
    
    UPROPERTY(EditAnywhere)
    float EvaluationWidth;
    
    UPROPERTY(EditAnywhere)
    float BoxExtentZFactor;
    
    UPROPERTY(EditAnywhere)
    float SelectedWidthBoost;
    
    UPROPERTY(EditAnywhere)
    float SelectedHeightBoost;
    
    UPROPERTY(EditAnywhere)
    float SelectedBoxZFactorBoost;
    
    UPROPERTY(EditAnywhere)
    float SelectedBoxZFactorBoost_Attached;
    
    UPROPERTY(EditAnywhere)
    float AttachedPickupPreferredBoxMaxHeight;
    
    UPROPERTY(EditAnywhere)
    float AttachedPickupTracedMeshPriorityBoost;
    
    UPROPERTY(EditAnywhere)
    float PickupStickiness;
    
    UPROPERTY(EditAnywhere)
    float MinLookAtTolerance;
    
    UPROPERTY(EditAnywhere)
    float SkipVisibilityTraceTestRange;
    
    UPROPERTY(EditAnywhere)
    float ItemCardBottomPickupOffset;
    
    UPROPERTY(EditAnywhere)
    float ItemCardUpperLootBeamHeight;
    
    OAKGAME_API FPickupEvaluationSettings();
};

