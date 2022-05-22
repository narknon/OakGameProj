#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "Curves/CurveFloat.h"
#include "LadderInteractData.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API ULadderInteractData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float RequiredViewAlignment;
    
    UPROPERTY(EditAnywhere)
    float RequiredRearViewAlignment;
    
    UPROPERTY(EditAnywhere)
    bool bCanMountLadderFromTopWhileFacing;
    
    UPROPERTY(EditAnywhere)
    float MaxVerticalSpeedToGrabLadder;
    
    UPROPERTY(EditAnywhere)
    float JumpRegrabDelay;
    
    UPROPERTY(EditAnywhere)
    float TopEnterAnimSyncTime;
    
    UPROPERTY(EditAnywhere)
    float TopExitAnimSyncTime;
    
    UPROPERTY(EditAnywhere)
    float ExitLocationDepthOffset;
    
    UPROPERTY(EditAnywhere)
    float ExitingTopThresholdHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float EnteringTopTargetHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float EnteringTopFeetToLadderThreshold;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LadderTopMountCurveHorz;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LadderTopMountCurveVert;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LadderTopDismountCurveHorz;
    
    UPROPERTY(EditAnywhere)
    FRuntimeFloatCurve LadderTopDismountCurveVert;
    
    ULadderInteractData();
};

