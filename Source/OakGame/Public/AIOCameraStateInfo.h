#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GbxEasingFunc.h"
#include "AIOCameraStatePostProcessOverrides.h"
#include "AIOCameraStateInfo.generated.h"

USTRUCT(BlueprintType)
struct OAKGAME_API FAIOCameraStateInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName StateName;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocation;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocationSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocationVerticalSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLocationQuadSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLookAtLocation;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLookAtLocationSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLookAtLocationVerticalSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FVector TargetLookAtLocationQuadSplitscreen;
    
    UPROPERTY(EditAnywhere)
    FGbxEasingFunc Easing;
    
    UPROPERTY(EditAnywhere)
    float TransitionDuration;
    
    UPROPERTY(EditAnywhere)
    FAIOCameraStatePostProcessOverrides PostProcessOverrides;
    
    FAIOCameraStateInfo();
};

