#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "Curves/CurveFloat.h"
#include "UObject/NoExportTypes.h"
#include "GeyserAlwaysOnData.generated.h"

UCLASS(BlueprintType)
class UGeyserAlwaysOnData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRuntimeFloatCurve VerticalAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bPullToCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeToReachCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D FalloffRange;
    
    UGeyserAlwaysOnData();
};

