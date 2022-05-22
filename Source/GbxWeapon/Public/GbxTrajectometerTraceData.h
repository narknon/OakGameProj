#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EGbxTrajectoryTraceShape.h"
#include "GbxTrajectometerTraceData.generated.h"

USTRUCT(BlueprintType)
struct FGbxTrajectometerTraceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> Channel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGbxTrajectoryTraceShape Shape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtentY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ExtentZ;
    
    GBXWEAPON_API FGbxTrajectometerTraceData();
};

