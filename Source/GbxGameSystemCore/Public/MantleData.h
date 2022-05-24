#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "MantleActionData.h"
#include "MantleData.generated.h"

UCLASS()
class UMantleData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FMantleActionData> Actions;
    
    UPROPERTY(EditAnywhere)
    FName ActionSlotToEnd;
    
    UPROPERTY(EditAnywhere)
    float MaxAlignToEdgeAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxAdjustedHeightDifference;
    
    UPROPERTY(EditAnywhere)
    float RequiredLedgeDepth;
    
    UPROPERTY(EditAnywhere)
    float WallHopHeightMax;
    
    UPROPERTY(EditAnywhere)
    float WallHopDestinationHeightMax;
    
    UPROPERTY(EditAnywhere)
    float WallHopDestinationHeightMin;
    
    UPROPERTY(EditAnywhere)
    float WallHopDepth;
    
    UMantleData();
};

